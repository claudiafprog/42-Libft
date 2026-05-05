/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:14:13 by clferrei          #+#    #+#             */
/*   Updated: 2026/04/24 11:46:49 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char a[] = "    ++42";
    char b[] = "   -+42";
    char c[] = "00";
    char d[] = "   -42";
    char e[] = " +0";

    printf("%d\n", ft_atoi(a));
    printf("%d\n", atoi(a));
    printf("%d\n", ft_atoi(b));
    printf("%d\n", atoi(b));
    printf("%d\n", ft_atoi(c));
    printf("%d\n", atoi(c));
    printf("%d\n", ft_atoi(d));
    printf("%d\n", atoi(d));
    printf("%d\n", ft_atoi(e));
    printf("%d\n", atoi(e));
    return (0);
}*/
