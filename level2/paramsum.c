/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 19:14:19 by albelmon          #+#    #+#             */
/*   Updated: 2026/04/13 20:30:58 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void    put_nbr(int n)
{
    char c;

    if (n > 9)
        put_nbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    (void)argv;

    if (argc == 1)
    {
        write(1, "0", 1);
        write(1, "\n", 1);
        return (0);
    }
    put_nbr(argc - 1);
    write(1, "\n", 1);
    return (0);
}
