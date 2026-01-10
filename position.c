/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 07:54:23 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/01/10 15:40:20 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_len(t_stack *stack)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = stack;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

int	position_in_stack(t_stack *stack)
{
	int	size;
	int	mid;

	size = stack_len(stack);
	mid = size / 2;
	while (stack)
	{
		if (stack->index <= mid)
			stack->position = 1;
		else
			stack->position = 0;
		stack = stack->next;
	}
}
