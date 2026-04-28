/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 10:06:51 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/04/10 10:33:54 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	int	a[10];
	int	b[8];
	int	c[6];
	int	i;

	ft_bzero(a, sizeof(a));
	for(i = 0; i < 10; i++)
		printf("%d", a[i]);
	printf("\n");
	ft_bzero(b, sizeof(b));
	for(i = 0; i < 8; i++)
		printf("%d", b[i]);
	printf("\n");
	ft_bzero(c, sizeof(c));
	for(i = 0; i < 6; i++)
		printf("%d", c[i]);
	printf("\n");
	return (0);
}*/
