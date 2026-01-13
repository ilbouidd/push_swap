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

long	calcul_moy_value(t_stack *stack)
{
	long	res;
	long	i;
	long	len;
	t_stack *tmp;

	res = 0;
	i = 0;
	tmp  = stack;
	len = stack_len(tmp);
	while (tmp)
	{
		res += tmp->value;
		i++;
		tmp = tmp->next;
	}
	if (i == 0)
		return (0);
	
	return (res / i);
}

void	sort_all_second(t_stack **stack_a, t_stack **stack_b)
{
	while ((*stack_b))
		push_a(stack_a, stack_b);
}

void	sort_all(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *tmp;
	int	smallest;
	int	pos;
	int	len;

	pos = 0;
	sort_three(stack_a, stack_b);
	while (stack_len(*stack_a))
	{
		put_index(stack_a, stack_b);
		find_target((*stack_a), (*stack_b));
		count_number(stack_a);
		put_first(stack_a, stack_b);
	}
	while ((*stack_b))
		push_a(stack_a, stack_b);
	tmp = (*stack_a);
	smallest = find_smallest_value(*stack_a);
	while (tmp && tmp->value != smallest)
	{
		pos++;
		tmp = tmp->next;
	}
	len = stack_len(*stack_a);
	if (pos <= len / 2)
	{
		while ((*stack_a)->value != smallest)
			rotate_a(stack_a);
	}
	else
	{
		while ((*stack_a)->value != smallest)
			reverse_rotate_a(stack_a);
	}
}
