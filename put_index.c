/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 10:41:15 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/01/10 15:45:19 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_index(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp)
	{
		ft_printf("%d ", tmp->index);
		tmp = tmp->next;
	}
	ft_printf("     index lines");
}

void	put_index(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;
	int		i;
	int		j;

	tmp_a = (*stack_a);
	tmp_b = (*stack_b);
	i = 0;
	j = 0;
	position_in_stack(tmp_a);
	position_in_stack(tmp_b);
	while (tmp_a != NULL)
	{
		if (tmp_a->position == 1)
		{
			tmp_a->index = i;
			tmp_a = tmp_a->next;
			i++;
		}
		else if (tmp_a->position ==0)
		{
			
		}
		
	}
	i = 0;
	while (tmp_b != NULL)
	{
		tmp_b->index = i;
		tmp_b = tmp_b->next;
		i++;
	}
}
