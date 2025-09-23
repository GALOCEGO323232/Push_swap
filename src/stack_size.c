/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:26:11 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/23 15:07:49 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_list *a)
{
	t_list *node;
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
