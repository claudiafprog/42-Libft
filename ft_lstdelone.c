/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:38:45 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/04/22 13:26:19 by claudiaferrei    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
#include <stdio.h>

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*temp;

	lst = NULL;

	n1 = ft_lstnew(ft_strdup("one"));
	n2 = ft_lstnew(ft_strdup("two"));
	n3 = ft_lstnew(ft_strdup("three"));

	ft_lstadd_back(&lst, n1);
	ft_lstadd_back(&lst, n2);
	ft_lstadd_back(&lst, n3);

	temp = lst;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	n1->next = n3;
	ft_lstdelone(n2, del);
	temp = lst;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	return (0);
}*/
