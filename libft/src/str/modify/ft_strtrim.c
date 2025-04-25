/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:05:29 by dnahon            #+#    #+#             */
/*   Updated: 2025/04/25 14:54:23 by dnahon           ###   ########.fr       */
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

	i = 0;
	j = 0;
	occur = 0;
	if (!s1)
		return (NULL);
	while (s1)
	{
		if (ft_strchr2(set, s1[i]))
			occur++;
	}
	str = malloc(sizeof(char *) * (ft_strlen(s1) - occur) + 1);
	if (!str)
		return (NULL);
	while (s1)
	{
		if (!ft_strchr2(set, s1[i]))
		{
			str[i] = s1[j];
			i++;
			j++;
		}
		else if (ft_strchr2(set, s1[i]))
		{
			i++;
			j++;
		}
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	printf("%s", ft_strtrim("test", "t"));
}