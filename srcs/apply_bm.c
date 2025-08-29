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

void	apply_best_moves(t_stack *a, t_stack *b, t_best_moves *bm)
{
	while (bm->nrr--)
		rr(a, b);
	while (bm->nrrr--)
		rrr(a, b);
	while (bm->nrrb--)
		rrb(b);
	while (bm->nrb--)
		rb(b);
	while (bm->nra--)
		ra(a);
	while (bm->nrra--)
		rra(a);
	pa(a, b);
}

void	ft_copy_best_move(t_best_moves *bm, t_best_moves *bm_temp)
{
	bm->nra = bm_temp->nra;
	bm->nrb = bm_temp->nrb;
	bm->nrra = bm_temp->nrra;
	bm->nrrb = bm_temp->nrrb;
	bm->nrrr = bm_temp->nrrr;
	bm->nrr = bm_temp->nrr;
	bm->tt = bm_temp->tt;
}

int	find_min(t_stack *stack)
{
	int	min;
	int	i;

	i = 1;
	min = stack->tab[0];
	while (i < stack->len)
	{
		if (stack->tab[i] < min)
			min = stack->tab[i];
		i++;
	}
	return (min);
}
