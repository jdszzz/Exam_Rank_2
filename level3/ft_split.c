/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:09:43 by albelmon          #+#    #+#             */
/*   Updated: 2026/04/15 18:37:21 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int is_space(char c)
{
    if (c == ' ' || c == '\t' || c == '\0' || c == '\n')
        return (1);
    return (0);
}

int count_words(char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i])
    {
        if (is_space(str[i]) == 0 && is_space(str[i + 1]) == 1)
            count++;
        i++;
    }
    return (count);
}

char *copy_word(char *str)
{
    int i;
    int len;
    char *word;

    i = 0;
    len = 0;
    while (is_space(str[len]) == 0)
        len++;
    word = (char *)malloc(sizeof(char) * (len + 1));
    if (!word)
        return (NULL);
    while (len > i)
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char    **ft_split(char *str)
{
    int     i;
    int     k;
    char    **result;
    int     words;

    i = 0;
    k = 0;
    words = count_words(str);
    result = (char **)malloc(sizeof(char *) * (words + 1));
    while (str[i])
    {
        while (str[i] && is_space(str[i]) == 1) //Salta los espacios iniciales
            i++;
        if (str[i] && is_space(str[i]) == 0)
        {
            result[k] = copy_word(&str[i]);
            k++;
            while (str[i] && is_space(str[i]) == 0) //Salta el resto de la palabra que ya esta copiada
                i++;
        }
    }
    result[k] = NULL;
    return (result);
}

/* int main(int argc, char **argv)
{
    char    **resultado;
    int     i;

    if (argc != 2)
    {
        printf("Uso: %s \"texto a separar\"\n", argv[0]);
        return (1);
    }

    resultado = ft_split(argv[1]);
    if (!resultado)
        return (1);

    i = 0;
    while (resultado[i] != NULL)
    {
        printf("Palabra [%d]: %s\n", i, resultado[i]);
        i++;
    }

    i = 0;
    while (resultado[i] != NULL)
    {
        free(resultado[i]);
        i++;
    }
    free(resultado);

    return (0);
}
 */