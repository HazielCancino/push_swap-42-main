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

t_format	init_flags(va_list *args)
{
	t_format	flags;

	ft_bzero(&flags, sizeof(t_format));
	va_copy(flags.args, *args);
	return (flags);
}

void	reset_flags(t_format *flags)
{
	flags->hashtag = 0;
	flags->space = 0;
	flags->minus = 0;
	flags->plus = 0;
	flags->point = 0;
	flags->width = 0;
	flags->precision = 0;
	flags->zero = 0;
}
