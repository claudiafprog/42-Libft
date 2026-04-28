/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:12:54 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/04/10 16:58:39 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	char	a[] = "aBcDefgHijKlM...12345\t\nnopqrSTUvWxYZ";

	for (unsigned long i = 0; i < ft_strlen(a); i++)
		printf("%c", ft_toupper(a[i]));
	printf("\n");
	return (0);
}*/
