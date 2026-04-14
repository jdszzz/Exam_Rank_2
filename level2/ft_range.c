/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 04:04:15 by albelmon          #+#    #+#             */
/*   Updated: 2026/04/14 04:15:09 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *range;
    int i;
    int size;

    if (end >= start)
        size = end - start + 1;
    else
        size = start - end + 1;
    range = (int *)malloc(sizeof(int) * size);
    if (!range)
        return (NULL);
    i = 0;
    while (i < size)
    {
        range[i] = start;
        if (end >= start)
            start++;
        else
            start--;
        i++;
    }
    return (range);
}
