/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_target.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 10:50:43 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/01/12 23:02:16 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	find_highest_value(t_stack *stack_b)
{
	t_stack	*tmp;
	long	highest;

	tmp = stack_b;
	highest = tmp->value;
	while (tmp)
	{
		if (highest < tmp->value)
			highest = tmp->value;
		tmp = tmp->next;
	}
	return (highest);
}

void	find_target_second(t_stack *tmp_a, t_stack *target, t_stack *tmp_b, t_stack *stack_b)
{
	int	highest;

	highest = find_highest_value(stack_b);
	if (target != NULL)
		tmp_a->target = target;
	else
	{
		tmp_b = stack_b;
		while (tmp_b->value != highest)
			tmp_b = tmp_b->next;
		tmp_a->target = tmp_b;
	}		
}

void	find_target(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;
	t_stack	*target;
	int		value_a;

	tmp_a = stack_a;
	while (tmp_a)
	{
		value_a = tmp_a->value;
		target = NULL;
		tmp_b = stack_b;
		while (tmp_b)
		{
			if (tmp_b->value < value_a && (target == NULL
					|| tmp_b->value > target->value))
				target = tmp_b;
			tmp_b = tmp_b->next;
		}
		find_target_second(tmp_a, target, tmp_b, stack_b);
		tmp_a = tmp_a->next;
	}
}

void	print_target(t_stack *stack)
{
	t_stack *tmp;

	tmp = stack;
	while (tmp)
	{
		ft_printf("%d ", tmp->target->value);
		tmp = tmp->next;
	}
	ft_printf("     target lines");
}