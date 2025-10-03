/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:21:33 by kgagliar          #+#    #+#             */
/*   Updated: 2025/10/02 16:33:56 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	normalize_stack(t_node *a)
{
	t_node		*tmp;
	t_node		*checker;
	int			index;

	tmp = a;
	while (tmp)
	{
		index = 0;
		checker = a;
		while (checker)
		{
			if (checker->content < tmp->content)
				index++;
			checker = checker->next;
		}
		tmp->index = index;
		tmp = tmp->next;
	}
}
