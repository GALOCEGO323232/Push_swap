/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radixsort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 13:40:51 by kgagliar          #+#    #+#             */
/*   Updated: 2025/10/02 16:54:34 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	process_bit(t_node **a, t_node **b, int bit)
{
	int		size;
	int		i;

	size = stack_size(*a);
	i = 0;
	while (i < size)
	{
		if ((((*a)->index >> bit) & 1) == 0)
			pb(a, b);
		else
			ra(a, b);
		i++;
	}
	while (*b != NULL)
		pa(a, b);
}

void	radix_sort(t_node **a, t_node **b)
{
	int		max_index;
	int		nbits;
	int		bit;

	max_index = stack_size(*a);
	nbits = 0;
	while (max_index >> nbits != 0)
		nbits++;
	bit = 0;
	while (bit < nbits)
	{
		process_bit(a, b, bit);
		bit++;
	}
}
