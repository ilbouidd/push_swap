/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_first.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 12:32:09 by ilbouidd          #+#    #+#             */
/*   Updated: 2025/12/26 12:39:02 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long    find_smallest_nc(t_stack *stack_a)
{
    
    t_stack *tmp;
    long smallest;
    
    tmp = stack_a;
    smallest = tmp->nb_coup;
    while(tmp)
    {
        if (smallest > tmp->nb_coup)
            smallest = tmp->nb_coup;
        tmp = tmp->next;
    }
    return (smallest);
}

void    put_first(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp_b;
    long smallest;


    smallest = find_smallest_nc(*stack_a);
    while((*stack_a)->nb_coup != smallest)
        rotate_a(stack_a);
    tmp_b = (*stack_a)->target;
    while((*stack_b) != tmp_b)
        rotate_b(stack_b);
    push_b(stack_a, stack_b);
}


long    find_smallest_value(t_stack *stack_b)
{
    
    t_stack *tmp;
    long smallest;
    
    tmp = stack_b;
    smallest = tmp->value;
    while(tmp)
    {
        if (smallest > tmp->value)
            smallest = tmp->value;
        tmp = tmp->next;
    }
    return (smallest);
}