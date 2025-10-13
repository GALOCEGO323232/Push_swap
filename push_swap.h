/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 11:37:21 by kgagliar          #+#    #+#             */
/*   Updated: 2025/10/02 17:36:08 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "lib/libft/inc/libft.h"

typedef struct s_node
{
	int				content;
	struct s_node	*next;
	struct s_node	*prev;
	int				index;
}	t_node;

void	error_exit(char *msg, t_node **a, t_node **b);
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
void	sa(t_node **a, t_node **b);
void	sb(t_node **a, t_node **b);
void	ss(t_node **a, t_node **b);
void	ra(t_node **a, t_node **b);
void	rb(t_node **a, t_node **b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a, t_node **b);
void	rrb(t_node **a, t_node **b);
void	rrr(t_node **a, t_node **b);
int		is_sorted(t_node **a);
int		find_min(t_node *a);
int		find_max(t_node *a);
int		stack_size(t_node *a);
void	two_sort(t_node **a);
void	three_sorts(t_node **a);
int		find_pos(t_node *a, int value);
void	bring_mim_to_top(t_node **a, t_node **b);
void	push_to_stack(t_node **a, int num);
int		contains_space(char *str);
void	parse_single_string(t_node **a, t_node **b, char *str);
void	parse_input(int argc, char **argv, t_node **a, t_node **b);
void	process_bit(t_node **a, t_node **b, int bit);
void	five_sorts(t_node **a, t_node **b);
void	radix_sort(t_node **a, t_node **b);
int		check_duplicate(t_node **a);
int		safe_ft_atoi(const char *str);
void	normalize_stack(t_node *a);
void	four_sorts(t_node **a, t_node **b);
void	silent_sa(t_node **a, t_node **b);
void	silent_sb(t_node **a, t_node **b);
void	silent_rrb(t_node **a, t_node **b);
void	silent_rra(t_node **a, t_node **b);
void	silent_rb(t_node **a, t_node **b);
void	silent_ra(t_node **a, t_node **b);
void	free_stack(t_node *stack);
void	ft_free_split(char **split);

#endif