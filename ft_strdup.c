/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 12:29:48 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/04/13 17:33:44 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	ft_memcpy(dup, src, len + 1);
	return (dup);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *tests[] = {
        "hello",
        "",
        "a",
        "42 is the answer",
        "   spaces   ",
        "\n\t\rtest",
        "aaaaaaa",
        "abcd\0hidden",
        "long string test for strdup function to see memory allocation",
        "1234567890",
        "!@#$%^&*()",
        NULL
    };

    int i = 0;
    char *copy;
    char *lib;

    while (tests[i])
    {
        printf("\n========================\n");
        printf("ORIGINAL: \"%s\"\n", tests[i]);

        copy = ft_strdup(tests[i]);
        lib = strdup(tests[i]);

        if (!copy || !lib)
        {
            printf("malloc failed\n");
            return (1);
        }

        printf("ft_strdup: \"%s\"\n", copy);
        printf("lib_strdup: \"%s\"\n", lib);

        if (strcmp(copy, lib) == 0)
            printf("RESULT: OK\n");
        else
            printf("RESULT: DIFF\n");

        free(copy);
        free(lib);

        i++;
    }

    return 0;
}*/
