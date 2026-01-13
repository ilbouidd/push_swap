/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_first.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 12:32:09 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/01/12 23:07:24 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	find_smallest_nc(t_stack *stack_a)
{
	long	smallest;

	smallest = stack_a->nb_coup;
	while (stack_a)
	{
		if (smallest > stack_a->nb_coup)
			smallest = stack_a->nb_coup;
		stack_a = stack_a->next;
	}
	return (smallest);
}

long	find_smallest_value(t_stack *stack_b)
{
	t_stack *tmp;
	long smallest;

	tmp = stack_b;
	smallest = tmp->value;
	while (tmp)
	{
		if (smallest > tmp->value)
			smallest = tmp->value;
		tmp = tmp->next;
	}
	return (smallest);
}

void	move_to_top_a(t_stack **stack, t_stack *target)
{
	int	len;
	int	i;
	t_stack	*tmp;

	len = stack_len(*stack);
	i = 0;
	tmp = (*stack);
	while (tmp && tmp != target)
	{
		tmp = tmp->next;
		i++;
	}
	if (i <= len / 2)
	{
		while ((*stack) != target)
			rotate_a(stack);
	}
	else
	{
		while ((*stack) != target)
			reverse_rotate_a(stack);
	}
}	

void	move_to_top_b(t_stack **stack, t_stack *target)
{
	int	len;
	int	i;
	t_stack	*tmp;

	len = stack_len(*stack);
	i = 0;
	tmp = (*stack);
	while (tmp && tmp != target)
	{
		tmp = tmp->next;
		i++;
	}
	if (i <= len / 2)
	{
		while ((*stack) != target)
			rotate_b(stack);
	}
	else
	{
		while ((*stack) != target)
			reverse_rotate_b(stack);
	}
}

void	put_first(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*best_a;
	t_stack	*target_b;
	long	smallest;

	smallest = find_smallest_nc(*stack_a);
	best_a = (*stack_a);
	while (best_a && best_a->nb_coup != smallest)
		best_a = best_a->next;
	if (!best_a)
		return ;
	target_b = best_a->target;
	move_to_top_a(stack_a, best_a);
	if (target_b)
		move_to_top_b(stack_b, target_b);
	push_b(stack_a, stack_b);
 }