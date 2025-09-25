/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 14:49:16 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/25 12:03:43 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void add_numbers_to_stack(t_list **a, char **nums, int count)
{
	int	i;
	int	num;

	i = 0;
	while(nums[i] != NULL)
	{
		num = ft_atoi(nums[i]);
		push_to_stack(a, num);
		i++;
	}
}
void	parse_single_string(t_list **a, char *str)
{
	int		space;
	char	**nums;
	int		count;
	int		i;

	i = -1;
	count = 0;
	space = contains_space(str);
	if (space == 1)
	{
		nums = ft_split(str, ' ');
		while (nums[++i] != NULL)
			count++;
		add_numbers_to_stack(a, nums, count);
		i = 0;
		while (nums[i] != NULL)
		{
			free(nums[i]);
			i++;
		}
		free(nums);
	}
	else if (space == 0)
		push_to_stack(a, ft_atoi(str));
}

void parse_input(int argc, char **argv, t_list **a)
{
	int	space;
	int	i;

	i = 1;
	if (argc == 1)
		error_exit("Invalid arguments.");
	else if (argc == 2)
		parse_single_string(a, argv[i]);
	else if (argc > 2)
	{
		while (argv[i] != NULL)
		{
			if (contains_space(argv[i]) == 1)
				error_exit("Invalid input: unexpected spaces.");
			i++;
		}
		add_numbers_to_stack(a, argv + 1, argc - 1);
	}
}

