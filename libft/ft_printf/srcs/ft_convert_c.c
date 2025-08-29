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

#include "../includes/ft_printf.h"

void	convert_c(t_format *flags, int *count)
{
	char	result;

	result = (char)va_arg(flags->args, int);
	while (flags->width > 1 && !flags->minus)
		ft_print_space(count, flags);
	write(1, &result, 1);
	(*count)++;
	while (flags->width > 1 && flags->minus)
		ft_print_space(count, flags);
}
