/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 09:01:45 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/04/22 13:24:44 by claudiaferrei    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*n4;
	t_list	*temp;

	lst = NULL;
	n1 = ft_lstnew("one");
	n2 = ft_lstnew("two");
	n3 = ft_lstnew("three");
	n4 = ft_lstnew("four");

	ft_lstadd_back(&lst, n1);
	ft_lstadd_back(&lst, n2);
	ft_lstadd_back(&lst, n3);
	ft_lstadd_back(&lst, n4);

	temp = lst;

	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	free(n1);
	free(n2);
	free(n3);
	free(n4);

	return (0);
}*/
