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

static int	is_number(const char *str)
{
	if (!str || !*str)
		return (0);
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

static long	safe_atol(const char *str, t_node **a, t_node **b)
{
	long	num;

	if (!is_number(str))
		error_exit("Error", a, b);
	num = ft_atol(str);
	if (num < -2147483648 || num > 2147483647)
		error_exit("Error", a, b);
	return (num);
}

static void	process_split(t_node **a, t_node **b, char **nums)
{
	long	num;
	int		i;

	i = 0;
	while (nums[i])
	{
		if (!is_number(nums[i]))
		{
			ft_free_split(nums);
			error_exit("Error", a, b);
		}
		num = ft_atol(nums[i]);
		if (num < -2147483648 || num > 2147483647)
		{
			ft_free_split(nums);
			error_exit("Error", a, b);
		}
		push_to_stack(a, (int)num);
		i++;
	}
	ft_free_split(nums);
}

void	parse_single_string(t_node **a, t_node **b, char *str)
{
	char	**nums;
	long	num;

	if (contains_space(str))
	{
		nums = ft_split(str, ' ');
		if (!nums)
			error_exit("Error", a, b);
		process_split(a, b, nums);
	}
	else
	{
		num = safe_atol(str, a, b);
		push_to_stack(a, (int)num);
	}
}

void	parse_input(int argc, char **argv, t_node **a, t_node **b)
{
	int	i;

	if (argc < 2 || (argc == 2 && argv[1][0] == '\0'))
		return ;
	i = 1;
	while (i < argc)
	{
		parse_single_string(a, b, argv[i]);
		i++;
	}
}
