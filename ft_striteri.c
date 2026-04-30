/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 16:22:28 by clferrei          #+#    #+#             */
/*   Updated: 2026/04/21 16:20:28 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
static void f(unsigned int i, char *s)
{
    *s = *s + i;
}

#include <stdio.h>

int	main(void)
{
	char	s[] = "abc";

	printf("%s\n", s);
	ft_striteri(s, f);
	printf("%s\n", s);
	return (0);
}*/
