/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:19:49 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/24 14:59:01 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(char *msg)
{
	ft_putstr_fd(msg, 2);
	ft_putstr_fd("\n", 2);
	exit(1);
}

int	find_pos(t_list *a, int value)
{
	t_list	*node;
	int		i;

	node = a;
	i = 0;
	while (node)
	{
		if (node->content == value)
			return (i);
		node = node->next;
		i++;
	}
	return (-1);
}

void	bring_mim_to_top(t_list **a, t_list **b)
{
	int	min;
	int	pos;
	int	n;

	n = stack_size(*a);
	min = find_min(*a);
	pos = find_pos(*a, min);
	while (pos != 0)
	{
		if (pos <= n / 2)
			ra(a, b);
		else
			rra(a, b);
		pos = find_pos(*a, min);
	}
	pb(a, b);
}

int	contains_space(char *str);