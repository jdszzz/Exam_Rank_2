/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 19:12:02 by albelmon          #+#    #+#             */
/*   Updated: 2026/04/09 16:56:58 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_union(char *s1, char *s2)
{
    int i;
    int seen[256];
    unsigned char c;

    i = 0;
    while (i < 256)
        seen[i++] = 0;
    i = 0;
    while (s1[i])
    {
        c = s1[i];
        if (!seen[c])
        {
            seen[c] = 1;
            write(1, &c, 1);
        }
        i++;
    }
    i = 0;
    while (s2[i])
    {
        c = s2[i];
        if (!seen[c])
        {
            seen[c] = 1;
            write(1, &c, 1);
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    
    if (argc != 3)
    {
        write(1, "\n", 1);
        return (0);
    }
    ft_union(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}
