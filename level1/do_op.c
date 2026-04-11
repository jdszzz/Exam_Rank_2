/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 18:28:54 by albelmon          #+#    #+#             */
/*   Updated: 2026/04/09 19:16:36 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int x;
    int y;
    int result;

    result = 0;
    if (argc == 4)
    {
        x = atoi(argv[1]);
        y = atoi(argv[3]);
        if (argv[2][0] == '+')
            result = (x + y);
        else if (argv[2][0] == '-')
            result = (x - y);
        else if (argv[2][0] == '/' && y != 0)
            result = (x / y);
        else if (argv[2][0] == '*')
            result = (x * y);
        else if (argv[2][0] == '%' && y != 0)
            result = (x % y);
        printf("%d\n", result);
    }
    else
        write(1, "\n", 1);
    return (0);
}
