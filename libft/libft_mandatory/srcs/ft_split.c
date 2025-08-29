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

size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

void	ft_free_result(char **result, int count)
{
	while (count > -1)
	{
		free(result[count]);
		count--;
	}
	free(result);
}

int	ft_fill_result(char **result, char c, char const *s, int count)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			j = i;
			while (s[j] && s[j] != c)
				j++;
			result[count] = (char *)malloc((j - i + 1) * sizeof(char));
			if (!result[count])
			{
				ft_free_result(result, count);
				return (0);
			}
			ft_strlcpy(result[count++], s + i, j - i + 1);
			i = j;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	nbr_mots;
	char	**result;

	if (!s)
		return (NULL);
	nbr_mots = ft_count_words(s, c);
	result = (char **)malloc((nbr_mots + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	if (!ft_fill_result(result, c, s, 0))
		return (NULL);
	*(result + nbr_mots) = NULL;
	return (result);
}
