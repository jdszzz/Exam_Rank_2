/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 21:10:48 by albelmon          #+#    #+#             */
/*   Updated: 2026/04/11 21:53:24 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_len(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strrev(char *str)
{
    int i;
    int strlen;
    char c;

    i = 0;
    strlen = ft_len(str) - 1;
    while (i < strlen)
    {
        c = str[i];
        str[i] = str[strlen];
        str[strlen] = c;
        i++;
        strlen--;
    }
    return (str);
}

/* int main(int argc, char **argv)
{
    char *res;

    if (argc == 2)
    {
        res = ft_strrev(argv[1]);
        printf("%s\n", res);
    }
    return (0);
} */
