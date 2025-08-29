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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*chaine;

	chaine = (char *)haystack;
	if (!needle[0])
		return (chaine);
	i = 0;
	while (i < len && chaine[i])
	{
		j = 0;
		if (chaine[i] == needle[j])
		{
			while (chaine[i] && needle[j] && chaine[i + j] == needle[j] && i
				+ j < len)
			{
				j++;
			}
			if (needle[j] == '\0')
				return (chaine + i);
		}
		i++;
	}
	return (NULL);
}
