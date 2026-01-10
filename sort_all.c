/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trit_all.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:47:29 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/01/08 18:26:08 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_all_second(int small_value, t_stack **stack_a, t_stack **stack_b)
{
	while ((*stack_b)->value != small_value)
		reverse_rotate_b(stack_b);
	while ((*stack_b))
		push_a(stack_a, stack_b);
}

void	sort_all(t_stack **stack_a, t_stack **stack_b)
{
	int	small_value;
	int	small_value_a;

	sort_three(stack_a, stack_b);
	while (stack_len(*stack_a))
	{
		put_index(stack_a, stack_b);
		find_target((*stack_a), (*stack_b));
		count_number(stack_a);
		put_first(stack_a, stack_b);
	}
	small_value = find_smallest_value(*stack_b);
	sort_all_second(small_value, stack_a, stack_b);
	small_value_a = find_smallest_value(*stack_a);
	while ((*stack_a)->value != small_value)
		reverse_rotate_b(stack_a);
}
