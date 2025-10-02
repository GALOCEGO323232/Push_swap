/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:22:00 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/23 13:22:00 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_node **a, t_node **b)
{
	t_node	*before_last;
	t_node	*node;

	(void)b;
	if (!a ||!*a || !(*a)->next)
		return ;
	node = *a;
	while (node->next != NULL)
		node = node->next;
	before_last = node->prev;
	before_last->next = NULL;
	node->next = *a;
	(*a)->prev = node;
	node->prev = NULL;
	*a = node;
	ft_printf("rra\n");
}

void	silent_rra(t_node **a, t_node **b)
{
	t_node	*before_last;
	t_node	*node;

	(void)b;
	if (!a ||!*a || !(*a)->next)
		return ;
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
