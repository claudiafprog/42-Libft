/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:44:16 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/04/22 13:31:26 by claudiaferrei    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>

void	f(void *content)
{
	char *str = (char *)content;
	free(str);
	str = ft_strdup("hehe");
}

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*temp;

	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("one")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("twoo")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("three")));
	temp = lst;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstiter(lst, f);
	temp = lst;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstclear(&lst, del);
	return (0);
}*/
