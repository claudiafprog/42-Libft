/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 10:29:45 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/04/10 09:54:51 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
/*
int	main(void)
{
	char *a = "";
	char *b = "\n";
	char *c = "ab";
	char *d = "abc\0def";

	printf("%zu\n", ft_strlen(a));
	printf("%zu\n", ft_strlen(b));
	printf("%zu\n", ft_strlen(c));
	printf("%zu\n", ft_strlen(d));
	return (0);
}*/
