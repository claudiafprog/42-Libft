/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 09:59:23 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/04/22 13:26:40 by claudiaferrei    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next)
		temp = temp->next;
	return (temp);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	lst = NULL;
	n1 = ft_lstnew("one");
	n2 = ft_lstnew("two");
	n3 = ft_lstnew("three");

	ft_lstadd_front(&lst, n3);
	ft_lstadd_front(&lst, n2);
	ft_lstadd_front(&lst, n1);

	printf("Last node content: %s\n", (char *)ft_lstlast(lst)->content);
	free(n1);
	free(n2);
	free(n3);
	return (0);
}*/
