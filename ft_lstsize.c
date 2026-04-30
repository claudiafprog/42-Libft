/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claudiaferreira <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 08:42:44 by claudiaferrei     #+#    #+#             */
/*   Updated: 2026/04/22 09:58:11 by claudiaferrei    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*temp;

	len = 0;
	temp = lst;
	while (temp)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
/*
#include <stdio.h>

int main(void)
{
    t_list *n1;
    t_list *n2;
    t_list *n3;
    t_list *n4;

    n1 = ft_lstnew("one");
    n2 = ft_lstnew("two");
    n3 = ft_lstnew("three");
    n4 = ft_lstnew("four");

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    printf("Size: %d\n", ft_lstsize(n1));
	free(n1);
	free(n2);
	free(n3);
	free(n4);
    return (0);
}*/
