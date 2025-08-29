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

void	delete_content(int content)
{
	(void)content;
}

void	handle_error(t_list **lst_tab)
{
	ft_lstclear(lst_tab, &delete_content);
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	ft_find_disturb(char *arg, t_list **lst_tab)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if ((arg[i] >= '0' && arg[i] <= '9') || arg[i] == ' ' || arg[i] == '+'
			|| arg[i] == '-')
			i++;
		else
			handle_error(lst_tab);
	}
}

int	find_dubble(t_list *lst_tab, int n)
{
	while (lst_tab)
	{
		if (lst_tab->content == n)
			return (1);
		lst_tab = lst_tab->next;
	}
	return (0);
}
