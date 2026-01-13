/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 11:00:15 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/01/13 01:04:50 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	count_number(t_stack **stack_a)
{
	t_stack	*tmp;

	tmp = (*stack_a);
	while (tmp)
	{
		if (tmp->position == 1)
			tmp->nb_coup = tmp->index;
		else
			tmp->nb_coup = stack_len(*stack_a) - tmp->index;
		if (tmp->target)
		{
			if (tmp->target->position == 1)
				tmp->nb_coup += tmp->target->index;
			else
				tmp->nb_coup += stack_len(tmp->target) - tmp->target->index;			
		}
		tmp = tmp->next;
	}
}

void	print_count_n(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp)
	{
		ft_printf("%d ", tmp->nb_coup);
		tmp = tmp->next;
	}
	ft_printf("     count lines");
}
