/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 15:34:40 by albelmon          #+#    #+#             */
/*   Updated: 2026/04/09 16:57:00 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
    unsigned char bit;
    int i;

    i = 8;
    while (i--)
    {
        bit = (octet >> i & 1) + '0';
        write(1, &bit, 1);
    }  
}
