/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 15:33:28 by albelmon          #+#    #+#             */
/*   Updated: 2026/04/09 15:33:48 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char   swap_bits(unsigned char octet)
{
    unsigned char high;
    unsigned char low;
    unsigned char result;

    high = (octet & 0xF0) >> 4;
    low = (octet & 0x0F) << 4;
    result = high | low;
    return (result);
}
