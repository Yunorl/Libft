/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:28:51 by dnahon            #+#    #+#             */
/*   Updated: 2025/04/25 18:14:11 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../libft.h"

char	*ft_strdup(const char *src)
{
	char	*ptr;

	ptr = (char *)ft_malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!ptr)
		return (NULL);
	ptr = ft_strcpy(ptr, src);
	return (ptr);
}
