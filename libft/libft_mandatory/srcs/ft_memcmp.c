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

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*chaine1;
	unsigned char	*chaine2;
	size_t			i;

	chaine1 = (unsigned char *)s1;
	chaine2 = (unsigned char *)s2;
	i = 0;
	if (!n)
		return (0);
	while (i < n - 1 && chaine1[i] == chaine2[i])
	{
		i++;
	}
	return (chaine1[i] - chaine2[i]);
}
