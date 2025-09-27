/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 14:49:16 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/27 16:50:45 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	if (!*str)
		return (0);
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

void	parse_single_string(t_node **a, char *str)
{
	char	**nums;
	int		i;

	if (contains_space(str))
	{
		nums = ft_split(str, ' ');
		i = 0;
		while (nums[i] != NULL)
		{
			if (!is_number(nums[i]))
				error_exit("invalid number");
			push_to_stack(a, ft_atoi(nums[i]));
			free(nums[i]);
			i++;
		}
		free(nums);
	}
	else
		push_to_stack(a, ft_atoi(str));
}

void	parse_input(int argc, char **argv, t_node **a)
{
	int	i;

	i = 1;
	if (argc == 1)
		error_exit("Invalid arguments.");
	else if (argc == 2)
		parse_single_string(a, argv[i]);
	else
	{
		while (argv[i] != NULL)
		{
			if (contains_space(argv[i]))
				error_exit("Invalid input: unexpected spaces.");
			if (!is_number(argv[i]))
				error_exit("invalid number");
			push_to_stack(a, ft_atoi(argv[i]));
			i++;
		}
	}
}
