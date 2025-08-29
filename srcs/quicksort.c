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

void	swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

int	partition(int *tab, int start, int end)
{
	int	pivot;
	int	start_tab;

	start_tab = start;
	pivot = tab[start];
	start++;
	while (start <= end)
	{
		while (start <= end && tab[start] < pivot)
			start++;
		while (start <= end && tab[end] > pivot)
			end--;
		if (start < end)
			swap(tab + start, tab + end);
	}
	swap(tab + start_tab, tab + end);
	return (end);
}

void	quick_sort(int *tab, int start, int end)
{
	int	pivot_index;

	if (start < end)
	{
		pivot_index = partition(tab, start, end);
		quick_sort(tab, start, pivot_index - 1);
		quick_sort(tab, pivot_index + 1, end);
	}
}
