/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 12:58:03 by clferrei          #+#    #+#             */
/*   Updated: 2026/04/17 14:37:45 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t buffer)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (buffer == 0)
		return (len);
	while (src[i] != '\0' && i < buffer - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*
#include "libft.h"
#include <stdio.h>
#include <string.h>

static void test(char *dst, const char *src, size_t size)
{
    char dst1[100];
    char dst2[100];

    memset(dst1, 'A', 100);
    memset(dst2, 'A', 100);

    strcpy(dst1, dst);
    strcpy(dst2, dst);

    size_t r1 = ft_strlcpy(dst1, src, size);
	size_t r2 = ft_strlcpy(dst2, src, size);


    printf("\n--- TEST ---\n");
    printf("src: '%s'\n", src);
    printf("size: %zu\n", size);

    printf("ft:  '%s' | return: %zu\n", dst1, r1);
    printf("lib: '%s' | return: %zu\n", dst2, r2);

    if (strcmp(dst1, dst2) == 0 && r1 == r2)
        printf("OK\n");
    else
        printf("KO ❌\n");
}

int main(void)
{
    char base[100] = "INITIAL";

    // 1. normal copy
    test(base, "hello world", 20);

    // 2. truncation case (VERY IMPORTANT)
    test(base, "hello world", 5);

    // 3. size = 0 (critical edge case)
    test(base, "hello world", 0);

    // 4. empty src
    test(base, "", 10);

    // 5. empty dst logically
    test("", "abc", 10);

    // 6. exact fit
    test(base, "12345", 6);

    // 7. dst smaller than src
    test(base, "abcdefg", 3);

    // 8. long string stress
    test(base,
        "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789",
        10);

    return (0);
}*/
