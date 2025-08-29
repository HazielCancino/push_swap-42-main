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

#include "../includes/get_next_line_bonus.h"

char	*find_newline(const char *s)
{
	if (!s)
		return (NULL);
	while (s && *s)
	{
		if (*s == '\n')
			return ((char *)s);
		s++;
	}
	return (NULL);
}

size_t	ft_strlen_gnl(char *result)
{
	size_t	size;

	size = 0;
	while (result[size])
	{
		size++;
	}
	return (size);
}

char	*ft_strdup_gnl(char *s, char *new_part, int size)
{
	char	*result;
	size_t	len;
	size_t	i;

	if (new_part)
		len = (size_t)new_part - (size_t)s + 1;
	else if (size >= 0)
		len = size;
	else
		len = ft_strlen_gnl(s);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '0';
	i = 0;
	while (i < len)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_strjoin_gnl(char *s1, char const *s2, size_t bytes_read)
{
	size_t	len_s1;
	size_t	i;
	size_t	j;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen_gnl((char *)s1);
	result = (char *)malloc((len_s1 + bytes_read + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = -1;
	j = -1;
	while (++i < len_s1)
		result[i] = s1[i];
	free(s1);
	s1 = NULL;
	while (++j < bytes_read)
		result[i + j] = s2[j];
	result[i + j] = '\0';
	return (result);
}
