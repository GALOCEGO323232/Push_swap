/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:22:45 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/23 13:22:45 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a, t_list **b)
{
	t_list		*node;
	t_list		*finallist;

	node = *a;
	finallist = *a;
	while (finallist->next != NULL)
		finallist = finallist->next;
	*a = node->next;
	(*a)->prev = NULL;
	finallist->next = node;
	node->prev = finallist;
	node->next = NULL;
}
