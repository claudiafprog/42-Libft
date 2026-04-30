/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 08:31:12 by clferrei          #+#    #+#             */
/*   Updated: 2026/04/17 14:05:54 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		start;
	int		end;
	int		i;

	if (!s1)
		return (NULL);
	if (!set || set[0] == '\0')
		return (ft_strdup(s1));
	start = 0;
	while (ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	if (start > end)
		return (ft_strdup(""));
	trim = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!trim)
		return (NULL);
	i = 0;
	while (start <= end)
		trim[i++] = s1[start++];
	trim[i] = '\0';
	return (trim);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1; 
	char	*set; 
	char	*res;

	s1 = "xxxxxxxxxxxx"; 
	set = "x"; 
	res = ft_strtrim(s1, set); 
	printf("'%s'\n", res); free(res); 

	s1 = "...abchelloabc..."; 
	set = ""; res = ft_strtrim(s1, set); 
	printf("'%s'\n", res); 
	free(res); 

	s1 = ""; 
	set = "x"; 
	res = ft_strtrim(s1, set); 
	printf("'%s'\n", res); 
	free(res); 

	s1 = ""; 
	set = ""; 
	res = ft_strtrim(s1, set); 
	printf("'%s'\n", res); 
	free(res); 
	
	return (0); 
}*/
