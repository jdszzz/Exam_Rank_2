/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 04:39:52 by albelmon          #+#    #+#             */
/*   Updated: 2026/04/14 04:54:29 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int mcd;

    mcd = 2;
    if (a == 0 || b == 0)
        return (0);
    if (a > b)
        mcd = a;
    else
        mcd = b;
    while (1)
    {
        if (mcd % a == 0 && mcd % b == 0)
            return (mcd);
        mcd++;
    }
    return (0);
}
