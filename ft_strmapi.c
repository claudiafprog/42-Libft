/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 15:22:34 by clferrei          #+#    #+#             */
/*   Updated: 2026/04/21 16:19:57 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*a;
	unsigned int		i;

	if (!s)
		return (NULL);
	a = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!a)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		a[i] = f(i, s[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}
/*
static char	f(unsigned int i, char c)
{
	return (c + i);
}

#include <stdio.h>

int	main(void)
{
	char				s[3] = "abc";
	char				*a;

	a = ft_strmapi(s, &f);
	printf("%s\n", a);
	return (0);
}*/
