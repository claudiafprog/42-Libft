/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 10:48:19 by clferrei          #+#    #+#             */
/*   Updated: 2026/04/17 13:51:58 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_digits(long n)
{
	int		len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static int	is_negative(int n)
{
	int	sign;

	if (n > 0)
		sign = 0;
	else
		sign = 1;
	return (sign);
}

static char	*create_str(long num, int len, int sign)
{
	char	*s;
	int		i;

	s = (char *)malloc(sizeof(char) * (len + sign + 1));
	if (!s)
		return (NULL);
	i = len + sign;
	while (i > sign)
	{
		s[i - 1] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	if (sign == 1)
		s[0] = '-';
	s[len + sign] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	num;
	int		len;
	int		sign;

	if (n == 0)
		return (ft_strdup("0"));
	num = n;
	sign = is_negative(num);
	if (num < 0)
		num = -num;
	len = count_digits(num);
	s = create_str(num, len, sign);
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	int a = 123;
	int b = -2147483648;
	int c = 0;
	int d = -42;

	char	*res;

	res = ft_itoa(a);
	printf("%d, %s\n", a, res);
	free(res);

	res = ft_itoa(b);
	printf("%d, %s\n", b, res);
	free(res);

	res = ft_itoa(c);
	printf("%d, %s\n", c, res);
	free(res);

	res = ft_itoa(d);
	printf("%d, %s\n", d, res);
	free(res);
	return (0);
}*/
