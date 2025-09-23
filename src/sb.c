/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:18:31 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/17 16:18:32 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_list **a, t_list **b)
{
	t_list *fno;
	t_list *sno;
	t_list *tno;

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
}
