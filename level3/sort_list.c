/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:01:13 by albelmon          #+#    #+#             */
/*   Updated: 2026/04/16 14:03:14 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct s_list t_list;

struct s_list {
    int data;
    t_list *next;
};

int ascending(int a, int b) //Devuelve 1 si se cumple la condición y 0 si no se cumple.
{
        return (a <= b);
}

t_list  *sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *current;
    int temp;
    int sorted;

    if (!lst)
        return (NULL);
    sorted = 0;
    while (sorted == 0)
    {
        sorted = 1;
        current = lst;
        while (current->next)
        {
            if (cmp(current->data, current->next->data) == 0)
            {
                temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                sorted = 0;
            }
            current = current->next;
        }
    }
    return (lst);
}
