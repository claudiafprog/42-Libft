/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:45:28 by clferrei          #+#    #+#             */
/*   Updated: 2026/04/14 09:17:04 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	s = (char *)malloc(nmemb * size);
	if (!s)
		return (NULL);
	ft_bzero(s, nmemb * size);
	return (s);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	int	*i;
	char *s;

	// TEST 1: int array
	i = ft_calloc(5, sizeof(int));
	for (int k = 0; k < 5; k++)
		printf("%d ", i[k]);
	printf("\n");
	free(i);

	// TEST 2: string write
	s = ft_calloc(10, sizeof(char));
	s[0] = 'A';
	s[1] = 'B';
	s[2] = 'C';
	printf("%s\n", s);
	free(s);

	// TEST 3: zero case
	printf("%p\n", ft_calloc(0, 10));

	return (0);
}*/
