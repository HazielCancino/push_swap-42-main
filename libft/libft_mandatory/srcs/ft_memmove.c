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

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tempsrc;
	unsigned char	*tempdst;

	if (!dest && !src)
		return (NULL);
	tempsrc = (unsigned char *)src;
	tempdst = (unsigned char *)dest;
	if (tempdst >= (tempsrc + n) || (tempdst + n) <= (tempsrc) || ((tempdst
				+ n) >= tempsrc && (tempdst + n) <= (tempsrc + n)))
		ft_memcpy(dest, src, n);
	else
	{
		while (n > 0)
		{
			*(tempdst + n - 1) = *(tempsrc + n - 1);
			n--;
		}
	}
	return (dest);
}
