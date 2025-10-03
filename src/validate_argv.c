/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 14:49:16 by kgagliar          #+#    #+#             */
/*   Updated: 2025/10/02 16:29:04 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	safe_ft_atoi(const char *str)
{
	long	num;
	long	min;
	long	max;

	min = -2147483648L;
	max = 2147483647L;
	if (!is_number(str))
		error_exit("Error", NULL, NULL);
	num = ft_atol(str);
	if (num < min || num > max)
		error_exit("Error", NULL, NULL);
	return ((int)num);
}

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
		if (!nums)
			return ;
		i = 0;
		while (nums[i] != NULL)
		{
			push_to_stack(a, safe_ft_atoi(nums[i]));
			free(nums[i]);
			i++;
		}
		free(nums);
	}
	else
	{
		if (!is_number(str))
			error_exit("Error", NULL, NULL);
		push_to_stack(a, safe_ft_atoi(str));
	}
}

void	parse_input(int argc, char **argv, t_node **a)
{
	int	i;

	i = 1;
	if (argc == 1)
		error_exit("Error", NULL, NULL);
	while (i < argc)
	{
		if (contains_space(argv[i]))
			parse_single_string(a, argv[i]);
		else
		{
			if (!is_number(argv[i]))
				error_exit("Error", NULL, NULL);
			push_to_stack(a, safe_ft_atoi(argv[i]));
		}
		i++;
	}
}
