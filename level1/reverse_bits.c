/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 19:17:17 by albelmon          #+#    #+#             */
/*   Updated: 2026/04/11 21:13:35 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char   reverse_bits(unsigned char octet)
{
    int i;
    unsigned char res;

    i = 0;
    res = 0;
    while (i < 8)
    {
        res = res << 1;
        res = res | (octet & 1);
        octet = octet >> 1;
        i++;
    }
    return (res);
}

/* 
0 | 0 = 0
1 | 0 = 1
0 | 1 = 1
1 | 1 = 1

0 & 0 = 0
1 & 0 = 0
0 & 1 = 0
1 & 1 = 1
*/
