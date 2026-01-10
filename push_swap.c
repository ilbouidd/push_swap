/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 21:45:56 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/01/10 15:29:51 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int	i;
	int		*tab;
	t_stack	*stack_a;
	t_stack	*stack_b;

	i = 1;
	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		return (0);
	if (ft_errors(av) == 1)
		return (ft_printf("Error"), 1);
	tab = create_tab(ac - 1, av + 1);
	if (!tab)
		return (1);
	stack_a = create_stack(stack_a, tab, (ac - 1));
	free(tab);
	if (!stack_a)
		return (1);
	second_part(stack_a, stack_b);
}
int	second_part(t_stack	*stack_a, t_stack *stack_b)
{
	if (stack_len(stack_a) == 1)
		return (free_stack(stack_a), 0);
	if (stack_len(stack_a) == 2)
	{
		sort_two(&stack_a);
		print_value(stack_a);
	}
	else if (stack_len(stack_a) == 3)
	{
		sort_just_three(&stack_a);
		print_value(stack_a);
	}
	else
		sort_all(&stack_a, &stack_b);
	// print_value(stack_a);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
