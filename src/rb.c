/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:22:32 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/23 13:22:32 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_node **a, t_node **b)
{
	t_node	*node;
	t_node	*finallist;

	(void)a;
	if (!b ||!*b || !(*b)->next)
		return ;
	node = *b;
	finallist = *b;
	while (finallist->next != NULL)
		finallist = finallist->next;
	*b = node->next;
	(*b)->prev = NULL;
	finallist->next = node;
	node->prev = finallist;
	node->next = NULL;
	ft_printf("rb\n");
}

void	silent_rb(t_node **a, t_node **b)
{
	t_node	*node;
	t_node	*finallist;

	(void)a;
	if (!b ||!*b || !(*b)->next)
		return ;
	node = *b;
	finallist = *b;
	while (finallist->next != NULL)
		finallist = finallist->next;
	*b = node->next;
	(*b)->prev = NULL;
	finallist->next = node;
	node->prev = finallist;
	node->next = NULL;
}
