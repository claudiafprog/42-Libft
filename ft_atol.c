/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:37:40 by clferrei          #+#    #+#             */
/*   Updated: 2026/05/19 14:44:04 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

long	ft_atol(const char *str)
{
	long	i;
	long	sign;
	long	result;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
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
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    long value;

    if (argc != 2)
    {
        write(2, "Error\n", 6);
        return (1);
    }

    value = ft_atol(argv[1]);

    printf("atol result: %ld\n", value);

    if (value > INT_MAX || value < INT_MIN)
    {
        write(2, "Error\n", 6);
        return (1);
    }

    printf("valid int: %d\n", (int)value);
    return (0);
}*/
