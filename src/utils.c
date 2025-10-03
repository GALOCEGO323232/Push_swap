/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:19:49 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/27 16:48:23 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(char *msg, t_node **a, t_node **b)
{
	ft_putstr_fd(msg, 2);
	ft_putstr_fd("\n", 2);
	if (a && *a)
		free_stack(*a);
	if (b && *b)
		free_stack(*b);
	exit(1);
}

int	find_pos(t_node *a, int value)
{
	t_node	*node;
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

void	bring_mim_to_top(t_node **a, t_node **b)
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

int	contains_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

void	push_to_stack(t_node **a, int num)
{
	t_node	*node;
	t_node	*tmp;

	node = malloc(sizeof(t_node));
	if (!node)
		error_exit("Error", NULL, NULL);
	node->content = num;
	node->next = NULL;
	node->prev = NULL;
	if (*a == NULL)
	{
		*a = node;
		return ;
	}
	tmp = *a;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = node;
	node->prev = tmp;
}
