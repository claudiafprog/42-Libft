/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 10:16:11 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/04/10 10:21:28 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char	a[10];
	char	b[8];
	char	c[6];
	int		i;

	ft_memset(a, 'A', sizeof(a));
	ft_memset(b, 'B', sizeof(b));
	ft_memset(c, 'C', sizeof(c));
	
	for(i = 0; i < 10; i++)
		printf("%c", a[i]);
	printf("\n");

	for(i = 0; i < 8; i++)
		printf("%c", b[i]);
	printf("\n");

	for(i = 0; i < 6; i++)
		printf("%c", c[i]);
	printf("\n");
	return (0);
}*/
