/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 04:15:48 by albelmon          #+#    #+#             */
/*   Updated: 2026/04/14 04:37:55 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n1;
    int n2;
    int mcd;

    if (argc == 3)
    {
        n1 = atoi(argv[1]);
        n2 = atoi(argv[2]);
        if (n1 > n2)
            mcd = n2;
        else
            mcd = n1;
        while (mcd != 0)
        {
            if (n1 % mcd == 0 && n2 % mcd == 0)
            {
                printf("%d", mcd);
                break ;
            }
            mcd--;
        }
    }
    printf("\n");
    return (0);
}
