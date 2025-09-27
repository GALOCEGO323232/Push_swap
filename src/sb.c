/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:21:14 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/23 13:21:14 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_node **a, t_node **b)
{
	t_node	*fno;
	t_node	*sno;
	t_node	*tno;

	(void)a;
	if (!*b || (*b)->next == NULL)
		return ;
	fno = *b;
	sno = (*b)->next;
	tno = sno->next;
	fno->next = tno;
	if (tno)
		tno->prev = fno;
	sno->next = fno;
	sno->prev = NULL;
	fno->prev = sno;
	*b = sno;
	ft_printf("sb\n");
}
