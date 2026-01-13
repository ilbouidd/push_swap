/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:44:50 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/01/13 03:10:36 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	int				nb_coup;
	int				position;
	struct s_stack	*next;
	struct s_stack	*target;
}					t_stack;

void				print_value(t_stack *stack);
int					is_double(char **av, int i, long nb);
int					ft_errors(char **av);
int					*create_tab(int ac, char **av);
t_stack				*ft_addfront_stack(t_stack *stack, int n);
t_stack				*create_stack(t_stack *stack, int *tab, int ac);
t_stack				*rotate(t_stack *stack);
void				rotate_a(t_stack **stack_a);
void				rotate_b(t_stack **stack_b);
void				rotate_r(t_stack **stack_a, t_stack **stack_b);
t_stack				*reverse_rotate(t_stack *stack);
void				reverse_rotate_a(t_stack **stack_a);
void				reverse_rotate_b(t_stack **stack_b);
void				reverse_rotate_r(t_stack **stack_a, t_stack **stack_b);
t_stack				*swap(t_stack *stack);
void				swap_a(t_stack **stack_a);
void				swap_b(t_stack **stack_b);
void				swap_r(t_stack **stack_a, t_stack **stack_b);
void				push(t_stack **stack_src, t_stack **stack_dst);
void				push_a(t_stack **stack_a, t_stack **stack_b);
void				push_b(t_stack **stack_a, t_stack **stack_b);
void				push_three(t_stack **stack_a, t_stack **stack_b);
void				sort_three(t_stack **stack_a, t_stack **stack_b);
void				print_index(t_stack *stack);
void				put_index(t_stack **stack_a, t_stack **stack_b);
int					stack_len(t_stack *stack);
void				position_in_stack(t_stack *stack);
void				find_target(t_stack *stack_a, t_stack *stack_b);
void				count_number(t_stack **stack_a);
void				print_target(t_stack *stack);
void				print_count_n(t_stack *stack);
long				find_smallest_nc(t_stack *stack_a);
void				put_first(t_stack **stack_a, t_stack **stack_b);
void				sort_all(t_stack **stack_a, t_stack **stack_b);
long				find_smallest_value(t_stack *stack_b);
void				sort_all_second(t_stack **stack_a, t_stack **stack_b);
long				find_highest_value(t_stack *stack_b);
void				sort_two(t_stack **stack_a);
void				sort_just_three(t_stack **stack_a);
void				sort_just_three_second(t_stack **stack_b, int first,
						int second, int third);
void				free_stack(t_stack *stack);
int					second_part(t_stack **stack_a, t_stack **stack_b);
long				calcul_moy_value(t_stack *stack);
long				strlen_split(char **str);
void				free_split(char **split);
int					is_sorted(t_stack *stack);

#endif