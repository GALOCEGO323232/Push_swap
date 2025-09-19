/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:18:28 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/17 16:18:29 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **a, t_list **b)
{
	t_list *fno;
	t_list *sno;
	t_list *tno;

	if (!*a || (*a)->next == NULL)
		return ;
	fno = *a;
	sno = (*a)->next;
	tno = sno->next;
	fno->next = tno;
	if (tno)
		tno->prev = fno;
	sno->next = fno;
	sno->prev = NULL;
	fno->prev = sno;
	*a = sno;
}
