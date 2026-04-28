/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 12:00:58 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/04/13 16:52:37 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char a1[] = "abcdef";
    char a2[] = "abcdez";

    char b1[] = {1, 2, 3, 4, 5};
    char b2[] = {1, 2, 3, 9, 5};

    char c1[] = "abc";
    char c2[] = "abc";

    char d1[] = "ab\0xx";
    char d2[] = "ab\0yy";

    printf("=== STRINGS ===\n");
    printf("ft: %d | libc: %d\n", ft_memcmp(a1, a2, 6), memcmp(a1, a2, 6));
    printf("ft: %d | libc: %d\n", ft_memcmp(c1, c2, 3), memcmp(c1, c2, 3));

    printf("\n=== RAW BYTES ===\n");
    printf("ft: %d | libc: %d\n", ft_memcmp(b1, b2, 5), memcmp(b1, b2, 5));

    printf("\n=== WITH \\0 INSIDE ===\n");
    printf("ft: %d | libc: %d\n", ft_memcmp(d1, d2, 5), memcmp(d1, d2, 5));

    printf("\n=== PARTIAL COMPARE ===\n");
    printf("ft: %d | libc: %d\n", ft_memcmp(a1, a2, 3), memcmp(a1, a2, 3));

    return 0;
}*/
