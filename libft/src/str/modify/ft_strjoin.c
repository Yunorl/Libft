/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:21:02 by dnahon            #+#    #+#             */
/*   Updated: 2025/04/25 13:59:58 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
char	*ft_strcat2(char *dest, const char *src)
{
	int	i;
	int	len_dest;

	len_dest = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	len;

	if (!s1 || !s2)
		return (0);
	str = malloc(sizeof(char *) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!str)
		return (NULL);
	str = ft_strcat2(str, s1);
	str = ft_strcat2(str, s2);
	len = ft_strlen(str) + 1;
	str[len] = '\0';
	return (str);
}
