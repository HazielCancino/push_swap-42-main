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

void	convert_s(t_format *flags, int *count)
{
	char	*result;
	int		len_result;

	result = va_arg(flags->args, char *);
	if (!result)
		return (ft_print_null(count, flags));
	if (flags->point && flags->precision < (int)ft_strlen(result))
		len_result = flags->precision;
	else
		len_result = (int)ft_strlen(result);
	while (flags->width && flags->width > len_result && !flags->minus)
		ft_print_space(count, flags);
	(*count) += write(1, result, len_result);
	while (flags->width && flags->width > len_result && flags->minus)
		ft_print_space(count, flags);
}
