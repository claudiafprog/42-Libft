/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 11:37:38 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/04/13 15:09:12 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == ((unsigned char)c))
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char a[30] = "abcdefghijklmnopqrstuvwxyz";
	char	c = 'y';
	size_t n = 26;

	printf("%p\n", ft_memchr(a, c, n));
	return (0);
}*/
