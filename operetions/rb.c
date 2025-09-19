/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:18:14 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/17 16:18:15 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_list **a, t_list **b)
{
	t_list *node;
	t_list *finallist;


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
