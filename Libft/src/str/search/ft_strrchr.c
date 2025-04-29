/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 21:36:08 by dnahon            #+#    #+#             */
/*   Updated: 2025/04/28 16:31:10 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	unsigned char	uc;

	uc = (unsigned char)c;
	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == uc)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}
/*
int	main(void)
{
	const char	*str = "Hello, World!";
	int			c;
	char		*result;

	c = 'o';
	result = ft_strrchr(str, c);
	if (result)
	{
		printf("Character '%c' found at position: %ld\n", c, result - str);
	}
	else
	{
		printf("Character '%c' not found.\n", c);
	}
	return (0);
}
 */