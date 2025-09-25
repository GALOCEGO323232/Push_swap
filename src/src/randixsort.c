/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randixsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 13:40:51 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/25 14:25:57 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	aux_randixsort(t_list **a, int size)
{
	t_list	*node;
	int		count;
	t_list		*tmp;

	node = *a;
	while (node != NULL)
	{
		count = 0;
		tmp = node;
		while (tmp != NULL)
		{
			if (tmp->content < node->content)
				count++;
			tmp = tmp->next;
		}
		node->content = count;
		node = node->next;
	}
}

void	randix_sort(t_list **a, t_list **b)
{
	t_list	*node;
	int		max_index;
	int		nbits;
	int		bit;
	int		i;

	i = 0;
	node = *a;
	max_index = stack_size(a);
	nbits = 0;
	while (max_index >> nbits != 0)
		nbits++;
	bit = 0;
	while (bit < nbits)
	{
		if (bit == 0)
			pb(a, b);
		if (bit == 1)
			ra(a, b);
		i++;
	}
}
