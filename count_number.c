/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 11:00:15 by ilbouidd          #+#    #+#             */
/*   Updated: 2025/12/28 18:27:48 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    count_number(t_stack **stack_a)
{
    t_stack *tmp;

    tmp = (*stack_a);
    while (tmp)
    {
        tmp->nb_coup = tmp->index + tmp->target->index;
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