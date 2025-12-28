/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 21:45:56 by ilbouidd          #+#    #+#             */
/*   Updated: 2025/12/28 18:13:14 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_main(t_stack *stack_a, t_stack *stack_b)
{
    ft_printf("Avant push:\n");
    print_value(stack_a);
    ft_printf("\nfin stack a\n");
    tri_all(&stack_a, &stack_b);
    ft_printf("Apres push:\n");
    print_value(stack_a);
    ft_printf("\nfin stack a\n");
    /*--------------------------------------------------*/
}

int main(int ac, char **av)
{
    int     *tab;
    t_stack *stack_a;
    t_stack *stack_b;

	stack_a = NULL;
    stack_b = NULL;
    if (ac < 2)
        return (0);
    if (ft_errors(av) == -1)
        return (ft_printf("Error"),-1);
    tab = create_tab(ac - 1, av + 1);
    if (!tab)
        return (-1);
    stack_a = create_stack(stack_a, tab, (ac - 1));
    free(tab);
    if (!stack_a)
        return (-1);
    print_main(stack_a, stack_b);          
    return (0);
}
