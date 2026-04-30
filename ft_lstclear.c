/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:38:37 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/04/22 12:26:20 by claudiaferrei    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*next;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (temp)
	{
		next = temp->next;
		del(temp->content);
		free(temp);
		temp = next;
	}
	*lst = NULL;
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

	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("one")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("two")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("three")));

	while(lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}

	ft_lstclear(&lst, del);

	if (!lst)
		printf("List cleared");
	else
		while(lst)
		{
			printf("%s\n", (char *)lst->content);
			lst = lst->next;
		}
	return (0);
}*/
