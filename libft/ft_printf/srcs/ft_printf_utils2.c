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

// a re checker par rapport a la width
void	ft_print_null(int *count, t_format *flags)
{
	if ((flags->point && flags->precision < 6) && flags->width < 6)
		return ;
	while (flags->width > 6 && !flags->minus)
		ft_print_space(count, flags);
	(*count) += write(1, "(null)", 6);
	while (flags->width > 6 && flags->minus)
		ft_print_space(count, flags);
}

void	ft_print_nill(int *count, t_format *flags)
{
	if ((flags->point && flags->precision < 5 && flags->width < 5))
		return ;
	while (flags->width > 5 && !flags->minus)
		ft_print_space(count, flags);
	(*count) += write(1, "(nil)", 5);
	while (flags->width > 5 && flags->minus)
		ft_print_space(count, flags);
}

void	zero_clc(t_format *flags, int *count)
{
	while (flags->width)
		ft_print_space(count, flags);
}

char	*ft_strcpy(char *dest, const char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}

char	*ft_add_ox(char *s, char conv_letter)
{
	size_t	len_s;
	char	*result;

	len_s = ft_strlen(s);
	result = (char *)malloc(len_s + 3);
	if (!result)
		return (NULL);
	result[0] = '0';
	result[1] = conv_letter;
	ft_strcpy(result + 2, s);
	free(s);
	return (result);
}
