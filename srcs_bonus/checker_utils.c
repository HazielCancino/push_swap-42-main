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

int	is_valid_instruct(char *instruct)
{
	size_t	len;

	len = ft_strlen(instruct);
	return ((len == 3 && (!ft_strncmp(instruct, "ra\n", 3)
				|| !ft_strncmp(instruct, "rb\n", 3) || !ft_strncmp(instruct,
					"rr\n", 3) || !ft_strncmp(instruct, "sa\n", 3)
				|| !ft_strncmp(instruct, "sb\n", 3) || !ft_strncmp(instruct,
					"ss\n", 3) || !ft_strncmp(instruct, "pb\n", 3)
				|| !ft_strncmp(instruct, "pa\n", 3))) || (len == 4
			&& (!ft_strncmp(instruct, "rra\n", 4) || !ft_strncmp(instruct,
					"rrb\n", 4) || !ft_strncmp(instruct, "rrr\n", 4))));
}

void	handle_error_instruct(t_instruct **linst, t_stack *a, t_stack *b)
{
	ft_lstclear_instruct(linst, &clear_content);
	free_stack(a, b);
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}
