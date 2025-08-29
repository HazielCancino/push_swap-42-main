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
#include "../../libft_mandatory/includes/libft.h"

int	ft_printf(const char *format, ...)
{
	int			index_format;
	int			count;
	va_list		args;
	t_format	flags;
	char		*format2;

	format2 = (char *)format;
	va_start(args, format);
	flags = init_flags(&args);
	index_format = 0;
	count = 0;
	while (format[index_format])
	{
		if (format[index_format] == '%' && format[index_format + 1])
			ft_construct_param(&flags, format2, &count, &index_format);
		else
			ft_putchar_max(format2, &count, &index_format);
		reset_flags(&flags);
	}
	va_end(args);
	return (count);
}
