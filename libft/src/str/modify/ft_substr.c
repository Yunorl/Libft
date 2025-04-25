/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:24:11 by dnahon            #+#    #+#             */
/*   Updated: 2025/04/25 13:30:15 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = malloc(sizeof(char *) * (len) + 1);
	if (!str)
		return (NULL);
	while (s[i] && start + i < start + len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
