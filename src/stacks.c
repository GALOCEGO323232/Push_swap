/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:26:11 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/27 14:32:46 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_node *a)
{
	t_node	*node;
	int		i;

	if (!a)
		return (0);
	i = 0;
	node = a;
	while (node)
	{
		i++;
		node = node->next;
	}
	return (i);
}

void	free_stack(t_node *stack)
{
	t_node	*tmp;

	while (stack)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
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
