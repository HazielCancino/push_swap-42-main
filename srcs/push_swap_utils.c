/* *************************************************** */
/*                                                     */
/*                                                     */
/*   checker.c                                         */
/*                                                     */
/*   By: Haziel_0_0_ <hazcancino@gmail.com>            */
/*                                                     */
/*   Created: 2023/12/12 20:21:00 by Haziel            */
/*   Updated: 2023/12/13 11:14:54 by Haziel            */
/*                                                     */
/* *************************************************** */

#include "../includes/push_swap.h"

void	handle_error_stack(t_stack *stack_a, t_stack *stack_b)
{
	free(stack_a->tab);
	free(stack_b->tab);
	free(stack_a);
	free(stack_b);
	exit(EXIT_FAILURE);
}

void	init_stack_b(t_stack *stack_a, t_stack **stack_b)
{
	*stack_b = malloc(sizeof(t_stack));
	if (!*stack_b)
		handle_error_stack(stack_a, *stack_b);
	(*stack_b)->tab = malloc(stack_a->len * sizeof(int));
	if (!(*stack_b)->tab)
		handle_error_stack(stack_a, (*stack_b));
	(*stack_b)->len = 0;
}

void	free_stack(t_stack *stack_a, t_stack *stack_b)
{
	free(stack_a->tab);
	free(stack_b->tab);
	free(stack_a);
	free(stack_b);
}

int	check_sort(t_stack *stack_a)
{
	int	i;

	i = 1;
	while (i < stack_a->len)
	{
		if (stack_a->tab[i - 1] > stack_a->tab[i])
			return (0);
		i++;
	}
	return (1);
}

int	check_r_sort(t_stack *stack_a)
{
	int	i;

	i = 1;
	while (i < stack_a->len)
	{
		if (stack_a->tab[i - 1] < stack_a->tab[i])
			return (0);
		i++;
	}
	return (1);
}
