/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:21:49 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/23 13:21:49 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_node **a, t_node **b)
{
	t_node	*before_last;
	t_node	*node;

	(void)a;
	if (!b ||!*b || !(*b)->next)
		return ;
	node = *b;
	while (node->next != NULL)
		node = node->next;
	before_last = node->prev;
	before_last->next = NULL;
	node->next = *b;
	(*b)->prev = node;
	node->prev = NULL;
	*b = node;
	ft_printf("rrb\n");
}

void	silent_rrb(t_node **a, t_node **b)
{
	t_node	*before_last;
	t_node	*node;

	(void)a;
	if (!b ||!*b || !(*b)->next)
		return ;
	node = *b;
	while (node->next != NULL)
		node = node->next;
	before_last = node->prev;
	before_last->next = NULL;
	node->next = *b;
	(*b)->prev = node;
	node->prev = NULL;
	*b = node;
}