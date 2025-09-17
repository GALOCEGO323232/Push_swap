/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:44:16 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/17 15:58:48 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int i;

	if (argc < 2)
		error_exit("Faltando argumentos");
	t_list *head = NULL;
	t_list *last = NULL;
	i = 1;
	while (i < argc)
	{
		t_list *now = malloc(sizeof(t_list));
		int *value = malloc(sizeof(int));
		*value = atoi(argv[i]);
		now->content = value;
		now->next = NULL;
		now->prev = last;
		if (last)
			last->next = now;
		else
			head = now;
		last = now;
		i++;
	}
}
