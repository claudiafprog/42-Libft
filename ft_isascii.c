/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 10:21:09 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/04/10 09:21:25 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
    printf("%d\n", ft_isascii(-128));
    printf("%d\n", ft_isascii(12));
    printf("%d\n", ft_isascii(1));
    return (0);
}*/
