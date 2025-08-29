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

void	sa(t_stack *stack_a)
{
	int	temp;

	if (stack_a->len < 2)
		return ;
	temp = stack_a->tab[0];
	stack_a->tab[0] = stack_a->tab[1];
	stack_a->tab[1] = temp;
	ft_printf("sa\n");
}

void	sb(t_stack *stack_b)
{
	int	temp;

	if (stack_b->len < 2)
		return ;
	temp = stack_b->tab[0];
	stack_b->tab[0] = stack_b->tab[1];
	stack_b->tab[1] = temp;
	ft_printf("sb\n");
}

void	sa_quiet(t_stack *stack_a)
{
	int	temp;

	if (stack_a->len < 2)
		return ;
	temp = stack_a->tab[0];
	stack_a->tab[0] = stack_a->tab[1];
	stack_a->tab[1] = temp;
}

void	sb_quiet(t_stack *stack_b)
{
	int	temp;

	if (stack_b->len < 2)
		return ;
	temp = stack_b->tab[0];
	stack_b->tab[0] = stack_b->tab[1];
	stack_b->tab[1] = temp;
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa_quiet(stack_a);
	sb_quiet(stack_b);
	ft_printf("ss\n");
}
