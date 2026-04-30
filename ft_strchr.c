/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 09:15:15 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/04/23 15:46:19 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
//	char	a[] = "dominos";
	printf("%p\n", strchr("teste", '\0'));
	printf("%p\n", ft_strchr("teste", '\0'));
	return (0);
}*/
