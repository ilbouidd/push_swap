/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_three.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 12:35:31 by ilbouidd          #+#    #+#             */
/*   Updated: 2025/12/22 12:23:18 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_three(t_stack **stack_a, t_stack **stack_b)
{
    int i;

    i = 0;
    while (i++ < 3)
        push_b(stack_a, stack_b);
    }
    void tri_three_second(t_stack **stack_b, int first, int second, int third)
    {
        if (first < second && second < third)
        {
            rotate_b(stack_b);
			swap_b(stack_b);
        }
        if (first < second && second > third)
        {
            if (third < first)
            swap_b(stack_b);
            else
            rotate_b(stack_b);
        }
        if (first > second && second < third)
        {
            if (third < first)
            {
                reverse_rotate_b(stack_b);
                swap_b(stack_b);
            }
            else
                reverse_rotate_b(stack_b);   
    }
}

void    tri_three(t_stack **stack_a, t_stack **stack_b)
{
    int first;
    int second;
    int third;
    push_three(stack_a, stack_b);
    first = (*stack_b)->value;
    second = (*stack_b)->next->value;
    third = (*stack_b)->next->next->value;
    tri_three_second(stack_b, first, second, third);
}
