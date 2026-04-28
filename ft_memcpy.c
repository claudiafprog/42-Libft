/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 11:15:19 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/04/23 15:42:25 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	a[] = "abcdefghij";
	char	b[8];

	ft_memcpy(b, a, sizeof(b));
	printf("%s\n", a);
	for(unsigned long i = 0; i < sizeof(b); i++)
		printf("%c", b[i]);
	return (0);
}*/
