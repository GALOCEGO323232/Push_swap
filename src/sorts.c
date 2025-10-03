/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 12:53:44 by kgagliar          #+#    #+#             */
/*   Updated: 2025/10/02 17:23:15 by kgagliar         ###   ########.fr       */
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
void	four_sorts(t_node **a, t_node **b)
{
	int	min_pos;

	min_pos = find_pos(*a, find_min(*a));
	while (min_pos != 0)
	{
		if (min_pos <= stack_size(*a) / 2)
			ra(a, NULL);
		else
			rra(a, NULL);
		min_pos = find_pos(*a, find_min(*a));
	}
	pb(a, b);
	three_sorts(a);
	pa(a, b);
	
}

void	five_sorts(t_node **a, t_node **b)
{
	bring_mim_to_top(a, b);
	bring_mim_to_top(a, b);
	three_sorts(a);
	pa(a, b);
	pa(a, b);
}
