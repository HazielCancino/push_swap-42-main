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

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_format
{
	int				width;
	int				precision;
	int				point;
	int				zero;
	int				hashtag;
	int				space;
	int				plus;
	int				minus;
	va_list			args;
}					t_format;

int					ft_printf(const char *format, ...);

char				*ft_itoa_boost(unsigned long long n);

unsigned long long	ft_atoi_base(char *str, char *base);
char				*ft_convert_base(char *nbr, char *base_from, char *base_to);

void				ft_construct_param(t_format *flags, char *format,
						int *count, int *index_format);

void				reset_flags(t_format *flags);
t_format			init_flags(va_list *args);

void				ft_putchar_max(char *format, int *count, int *index_format);
void				ft_convert(t_format *flags, char *format, int *count,
						int *index_format);

void				convert_u(t_format *flags, int *count);
void				convert_id(t_format *flags, int *count);
void				convert_c(t_format *flags, int *count);
void				convert_p(t_format *flags, int *count);
void				convert_s(t_format *flags, int *count);
void				convert_x(t_format *flags, int *count, char conv_letter);

void				ft_display(t_format args);
void				zero_clc(t_format *flags, int *count);
void				ft_print_null(int *count, t_format *flags);
void				ft_print_nill(int *count, t_format *flags);
void				ft_putchar_count(char c, int *count);
void				ft_print_zero_precision(int *count, t_format *flags);
void				ft_print_space(int *count, t_format *flags);
char				*ft_add_ox(char *s, char conv_letter);
void				ft_print_zero(int *count, t_format *flags);

#endif