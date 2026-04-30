/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 12:02:32 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/04/13 14:58:05 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
int	main(void)
{
	char a[20] = "42 Antwerp";
	char b[20] = "42 Bruxels";
	int	n = 5;

	printf("%s\n", a);
	printf("%s\n", b);
	printf("Compare until: %d\n", n);
	printf("Result: %d\n", ft_strncmp(a, b, n));
	return (0);
}*/
