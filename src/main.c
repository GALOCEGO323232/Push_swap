/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:44:16 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/27 17:12:50 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_duplicate(t_node **a)
{
	t_node	*node;
	t_node	*checker;

	node = *a;
	while (node != NULL)
	{
		checker = node->next;
		while (checker != NULL)
		{
			if (node->content == checker->content)
				error_exit("duplicate");
			checker = checker->next;
		}
		node = node->next;
	}
	return (1);
}

int	check_int_limits(t_node **a)
{
	int		min;
	int		max;
	t_node	*node;

	min = -2147483648;
	max = 2147483647;
	node = *a;
	while (node != NULL)
	{
		if (node->content < min|| node->content > max)
			error_exit("value out of int range");
		node = node->next;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int		size;

	a = NULL;
	b = NULL;
	parse_input(argc, argv, &a);
	check_int_limits(&a);
	check_duplicate(&a);
	if (is_sorted(&a))
		return (0);
	size = stack_size(a);
	if (size == 2)
		sa(&a, NULL);
	else if (size == 3)
		three_sorts(&a);
	else if (size == 5)
		five_sorts(&a, &b);
	else
		radix_sort(&a, &b);
}
