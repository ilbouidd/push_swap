/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_all.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:47:29 by ilbouidd          #+#    #+#             */
/*   Updated: 2025/12/28 11:50:49 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    tri_all_second(int small_value, t_stack **stack_a, t_stack **stack_b)
{
    while ((*stack_b)->value != small_value)
        reverse_rotate_b(stack_b);
    while ((*stack_b))
        push_a(stack_a, stack_b);
}

void    tri_all(t_stack **stack_a, t_stack **stack_b)
{
    int small_value;
    int small_value_a;
    
    tri_three(stack_a,stack_b);
    while (stack_len(*stack_a))
    {
        put_index(stack_a, stack_b);
        find_target((*stack_a), (*stack_b));
        count_number(stack_a);
        put_first(stack_a, stack_b);
    }
        small_value = find_smallest_value(*stack_b);
        tri_all_second(small_value, stack_a, stack_b);
    small_value_a = find_smallest_value(*stack_a);
    while ((*stack_a)->value != small_value)
        reverse_rotate_b(stack_a);
}
