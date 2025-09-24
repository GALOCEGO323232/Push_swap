/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 12:53:44 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/24 14:15:23 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_sort(t_list **a)
{
	if ((*a)->content > (*a)->next->content)
		sa(a, NULL);
}

void	three_sorts(t_list **a)
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

void	five_sorts(t_list **a, t_list **b)
{
	bring_mim_to_top(a, b);
	bring_mim_to_top(a, b);
	three_sorts(a);
	pa(a, b);
	pa(a, b);
}
