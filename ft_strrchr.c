/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 09:26:47 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/04/10 17:39:21 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int main(void)
{
    char str1[] = "abcabcabc";
    char str2[] = "hello world";
    char str3[] = "";
    char str4[] = "aaaaaaa";

    printf("%s\n", ft_strrchr(str1, 'a'));
    printf("%s\n", ft_strrchr(str1, 'c'));
    printf("%s\n", ft_strrchr(str1, 'z'));

    printf("%s\n", ft_strrchr(str2, 'o'));
    printf("%s\n", ft_strrchr(str2, 'h'));
    printf("%s\n", ft_strrchr(str2, '!'));

    printf("%s\n", ft_strrchr(str3, 'a'));
    printf("%s\n", ft_strrchr(str3, '\0'));

    printf("%s\n", ft_strrchr(str4, 'a'));

    return 0;
}*/
