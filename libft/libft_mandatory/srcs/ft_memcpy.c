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

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tempsrc;
	unsigned char	*tempdst;

	i = 0;
	if (!dest && !src)
		return (NULL);
	tempsrc = (unsigned char *)src;
	tempdst = (unsigned char *)dest;
	while (i++ < n)
	{
		*tempdst = *tempsrc;
		tempdst++;
		tempsrc++;
	}
	return (dest);
}
