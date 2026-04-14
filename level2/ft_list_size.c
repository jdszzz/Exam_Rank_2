/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 01:12:37 by albelmon          #+#    #+#             */
/*   Updated: 2026/04/14 04:01:58 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int     ft_list_size(t_list *begin_list)
{
    int i;

    i = 0;
    while (begin_list != NULL)
    {
        begin_list = begin_list->next;
        i++;
    }
    return (i);
}
