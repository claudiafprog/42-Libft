/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 12:17:43 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/04/10 12:54:17 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else if (dst > src)
	{
		i = len;
		while (i > 0)
		{
			i--;
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
	}
	return (dst);
}
/*
int	main(void)
{
	char	a[] = "ABCDE";
	char    b[] = "ABCDE";
	char	c[10] = {0};
	char    d[] = "ABCDE";
	char	e[20] = "ABCDE\0xxxxx";

	ft_memmove(a, a, 5);
	printf("ABCDE - %s\n", a);
	ft_memmove(a + 2, a, 3);
	printf("ABABC - %s\n", a);
	ft_memmove(b, b + 2, 3);
	printf("CDEDE - %s\n", b);
	ft_memmove(c, a, 5);
	printf("ABABC - %s\n", c);
	ft_memmove(d, d + 1, 4);
	printf("BCDEE - %s\n", d);
	ft_memmove(d + 2, d, 0);
	printf("BCDEE - %s\n", d);
	ft_memmove(e + 2, e, 7);
	for (unsigned long i = 0; i < sizeof(e); i++)
		printf("%c ", e[i]);
	printf("\n");
	return (0);
}*/
