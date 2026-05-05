/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:39:02 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/05/05 14:52:42 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			del(new_content);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
#include <stdio.h>

void	*f(void *content)
{
	free(content);
	return ft_strdup("Special New Content");
}

void    del(void *content)
{
	free(content);               
}	

int	main(void)
{
	t_list	*lst;
	t_list	*new_list;
	t_list	*temp;

	lst = NULL;

	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("one")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("two")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("three")));

	temp = lst;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	
	new_list = ft_lstmap(lst, &f, del);

	while (new_list)
	{                                                                            
		printf("%s\n", (char *)new_list->content);                  
		new_list = new_list->next;     
	}
	ft_lstclear(&lst, del);
	ft_lstclear(&new_list, del);
	return (0);
}
*/
