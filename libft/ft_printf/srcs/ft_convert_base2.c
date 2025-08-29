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

unsigned long long	ft_strlen2(char *str)
{
	unsigned long long	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned long long	ft_sign(char *str, unsigned long long *i)
{
	unsigned long long	sign;

	sign = 1;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
		{
			sign *= -1;
		}
		(*i) += 1;
	}
	return (sign);
}

unsigned long long	convert_string_to_int(char *str, char *base,
		unsigned long long len, unsigned long long i)
{
	unsigned long long	nbr;
	unsigned long long	j;
	long long			value;

	nbr = 0;
	while (str[i])
	{
		value = -1;
		j = 0;
		while (j < len && base[j] != str[i])
		{
			j++;
		}
		if (j < len)
		{
			value = j;
		}
		if (value == -1)
			break ;
		nbr = nbr * len + value;
		i++;
	}
	return (nbr);
}

unsigned long long	ft_atoi_base(char *str, char *base)
{
	unsigned long long	nbr;
	unsigned long long	len;
	unsigned long long	sign;
	unsigned long long	i;

	i = 0;
	nbr = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	len = ft_strlen2(base);
	sign = ft_sign(str, &i);
	nbr = convert_string_to_int(str, base, len, i);
	return (nbr * sign);
}
