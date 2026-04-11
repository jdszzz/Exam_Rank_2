/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:01:29 by albelmon          #+#    #+#             */
/*   Updated: 2026/04/09 17:17:49 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

void wdmatch(char *s1, char *s2)
{
    int i;
    int j;
    int s1len;

    i = 0;
    j = 0;
    s1len = ft_strlen(s1);
    while (s2[i])
    {
        if (s1[j] == s2[i])
            j++;
        i++;
    }
    i = 0;
    if (s1len == j)
    {
        while (s1[i])
        {
            write(1, &s1[i], 1);
            i++;
        }
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
        wdmatch(argv[1], argv[2]);
    write (1, "\n", 1);
    return (0);
}
