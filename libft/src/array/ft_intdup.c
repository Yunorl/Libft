/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 00:30:18 by dnahon            #+#    #+#             */
/*   Updated: 2025/04/25 13:02:08 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <stddef.h>

int	*ft_arrdup(int *arr, size_t size)
{
	int	*dup;

	dup = (int *)malloc(sizeof(int) * size);
	if (!dup)
		return (NULL);
	dup = ft_intcpy(arr, dup, size);
	return (dup);
}
