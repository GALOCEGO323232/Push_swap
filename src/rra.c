/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:18:20 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/17 16:18:21 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **a, t_list **b)
{
	t_list	*before_last;
	t_list	*node;

	node = *a;
	while (node->next != NULL)
		node = node->next;
	before_last = node->prev;
	before_last->next = NULL;
	node->next = *a;
	(*a)->prev = node;
	node->prev = NULL;
	*a = node;
}