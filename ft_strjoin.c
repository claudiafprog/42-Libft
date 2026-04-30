/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:58:26 by clferrei          #+#    #+#             */
/*   Updated: 2026/04/14 16:20:46 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	joined = (char *)malloc(sizeof(char) * len1 + len2 + 1);
	if (!joined)
		return (NULL);
	ft_strlcpy(joined, s1, len1 + 1);
	ft_strlcpy(joined + len1, s2, len2 + 1);
	return (joined);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char *s1 = "42 ";
    char *s2 = "Antwerpen";
    char *res;

    // Teste 1: Caso normal
    res = ft_strjoin(s1, s2);
    printf("Teste 1 (Normal): [%s]\n", res);
    free(res); // Nunca esquecer o free!

    // Teste 2: Uma string vazia
    res = ft_strjoin("", "42");
    printf("Teste 2 (Vazia):  [%s]\n", res);
    free(res);

    // Teste 3: Ambas vazias
    res = ft_strjoin("", "");
    printf("Teste 3 (Ambas):  [%s]\n", res);
    free(res);

    return (0);
}*/
