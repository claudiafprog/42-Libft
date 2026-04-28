/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:17:59 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/04/10 17:04:15 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
int	main(void)
{
	char a[] = "aBcDefgHijKlM...12345\t\nnopqrSTUvWxYZ";

	for (unsigned long i = 0; i < ft_strlen(a); i++)
		printf("%c", ft_tolower(a[i]));
	printf("\n");
	return (0);
}*/
