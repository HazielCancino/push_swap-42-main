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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	len_result;
	char	*result;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
	{
		result = ft_calloc(1, 1);
		if (!result)
			return (NULL);
	}
	else
	{
		if (len_s - start > len)
			len_result = len;
		else
			len_result = len_s - start;
		result = (char *)malloc((len_result + 1) * sizeof(char));
		if (!result)
			return (NULL);
		ft_strlcpy(result, s + start, len + 1);
	}
	return (result);
}
