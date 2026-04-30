/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 09:00:50 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/04/13 16:03:21 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while ((i + j) < len && needle[j] == haystack[i + j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char a[20] = "anabolobana";
	char b[20] = "bolob";
	char c[20] = "anx";
	char d[20];
	
	printf("%s\n", ft_strnstr(a, b, 20));
	printf("%s\n", ft_strnstr(a, c, 20));
	printf("%s\n", ft_strnstr(a, d, 20));
	return (0);
}*/
