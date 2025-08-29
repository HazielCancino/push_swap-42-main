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

void	ft_putchar_max(char *format, int *count, int *index_format)
{
	write(1, &(format[*index_format]), 1);
	(*count)++;
	(*index_format)++;
}

void	ft_print_space(int *count, t_format *flags)
{
	write(1, " ", 1);
	(*count)++;
	flags->width--;
}

void	ft_print_zero(int *count, t_format *flags)
{
	write(1, "0", 1);
	(*count)++;
	flags->width--;
}

void	ft_print_zero_precision(int *count, t_format *flags)
{
	write(1, "0", 1);
	(*count)++;
	flags->precision--;
}

void	ft_putchar_count(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}
