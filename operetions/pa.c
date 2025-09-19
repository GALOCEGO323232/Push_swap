/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:18:06 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/17 16:18:07 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pa(t_list **a, t_list **b)
{
    t_list *node;

    if (!*b)
        return ;
    node = *b;
    *b = (*b)->next;
    if (*b)
        (*b)->prev = NULL;
    node->next = *a;
    if (*a)
        (*a)->prev = node;
    *a = node;
    node->prev = NULL;
}
