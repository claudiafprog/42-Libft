/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 11:28:19 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/04/21 16:07:05 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ispositive(const char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			if (str[i + 1] == '-')
				break ;
			sign = -1;
		}
		i++;
	}
	return (sign);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	if (!str || str[0] == '\0')
		return (0);
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i + 1] == '+' || str[i + 1] == '-')
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	sign = ispositive(str);
	return (result * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *tests[] = {
        "42",
        "    -42",
        "   +42",
        "4193 with words",
        "words 123",
        "--42",
        "++42",
        "-+42",
        "+-42",
        "00042",
        "   0000042",
        "2147483647",
        "2147483648",
        "-2147483648",
        "-2147483649",
        "   -00000123abc",
        "",
        "   ",
        "+",
        "-",
        "  +0",
        "  -0",
        "42+42",
        "   +42  ",
        "\t\n\r\v\f42",
        NULL
    };

    int i = 0;

    while (tests[i])
    {
        printf("INPUT: \"%s\"\n", tests[i]);
        printf("ft_atoi: %d\n", ft_atoi(tests[i]));
        printf("atoi   : %d\n", atoi(tests[i]));
        printf("-------------------------\n");
        i++;
    }
    return 0;
}*/
