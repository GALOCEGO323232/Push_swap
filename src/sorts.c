/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 12:53:44 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/27 14:32:31 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_sort(t_node **a)
{
	if ((*a)->content > (*a)->next->content)
		sa(a, NULL);
}

void	three_sorts(t_node **a)
{
	if ((*a)->content > (*a)->next->content
		&& (*a)->content < (*a)->next->next->content)
		sa(a, NULL);
	else if ((*a)->content > (*a)->next->content
		&& (*a)->next->content > (*a)->next->next->content)
	{
		sa(a, NULL);
		rra(a, NULL);
	}
	else if ((*a)->content > (*a)->next->content
		&& (*a)->next->content < (*a)->next->next->content)
		ra(a, NULL);
	else if ((*a)->content < (*a)->next->content
		&& (*a)->content > (*a)->next->next->content)
		rra(a, NULL);
	else if ((*a)->content < (*a)->next->content
		&& (*a)->next->content > (*a)->next->next->content)
	{
		sa(a, NULL);
		ra(a, NULL);
	}
}

void	five_sorts(t_node **a, t_node **b)
{
	bring_mim_to_top(a, b);
	bring_mim_to_top(a, b);
	three_sorts(a);
	pa(a, b);
	pa(a, b);
}
