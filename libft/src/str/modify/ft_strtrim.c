/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:05:29 by dnahon            #+#    #+#             */
/*   Updated: 2025/04/25 18:14:24 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../libft.h"

char	*ft_strchr2(const char *str, int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	while (*str)
	{
		if (*str == uc)
			return ((char *)str);
		str++;
	}
	if (uc == '\0')
		return ((char *)str);
	return (0);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;
	unsigned int	occur;

	if (!s1)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr2(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_strchr2(set, s1[j - 1]))
		j--;
	str = ft_malloc(sizeof(char) * (j - i + 1));
	if (!str)
		return (NULL);
	occur = 0;
	while (i < j)
	{
		str[occur++] = s1[i++];
	}
	str[occur] = '\0';
	return (str);
}
