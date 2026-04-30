/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 08:59:32 by clferrei          #+#    #+#             */
/*   Updated: 2026/04/17 10:44:57 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**populate_arrays(char **split, char const *s, char c)
{
	int	i;
	int	x;
	int	start;
	int	len;

	i = 0;
	x = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		len = i - start;
		split[x] = (char *)malloc(sizeof(char) * (len + 1));
		ft_strlcpy(split[x], &s[start], len + 1);
		x++;
	}
	split[x] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**split;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (NULL);
	populate_arrays(split, s, c);
	return (split);
}
/*
#include <stdio.h>

static void free_split(char **split)
{
    int i = 0;

    if (!split)
        return;

    while (split[i])
    {
        free(split[i]);
        i++;
    }
    free(split);
}

static void print_split(char **arr)
{
    int i = 0;

    if (!arr)
    {
        printf("(null)\n");
        return;
    }

    while (arr[i])
    {
        printf("[%d] '%s'\n", i, arr[i]);
        i++;
    }
}

int main(void)
{
    char **res;

    printf("=== TEST 1: normal ===\n");
    res = ft_split("hello world 42", ' ');
    print_split(res);
	free_split(res);

    printf("\n=== TEST 2: multiple spaces ===\n");
    res = ft_split("   ola   mundo  42   ", ' ');
    print_split(res);
	free_split(res);

    printf("\n=== TEST 3: only delimiters ===\n");
    res = ft_split("      ", ' ');
    print_split(res);
	free_split(res);

    printf("\n=== TEST 4: empty string ===\n");
    res = ft_split("", ' ');
    print_split(res);
	free_split(res);

    printf("\n=== TEST 5: no delimiters ===\n");
    res = ft_split("libft", ' ');
    print_split(res);
	free_split(res);

    printf("\n=== TEST 6: delimiter is char inside words ===\n");
    res = ft_split("a,b,c,,d", ',');
    print_split(res);
	free_split(res);

    printf("\n=== TEST 7: leading + trailing + mixed ===\n");
    res = ft_split(",,,abc,,def,,", ',');
    print_split(res);
	free_split(res);

    return (0);
}*/
