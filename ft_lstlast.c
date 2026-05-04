/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 12:49:13 by bbk               #+#    #+#             */
/*   Updated: 2026/05/03 17:33:26 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*i;

	if (!lst)
		return (NULL);
	i = lst;
	while (i->next != NULL)
	{
		i = i->next;
	}
	return (i);
}

// int main(void)
// {
// 	t_list 	*head;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*ptr;

// 	head = ft_lstnew("first");
// 	if (!head)
// 		return (1);
// 	node1 = ft_lstnew("second");
// 	if (!node1)
// 		return (1);
// 	node2 = ft_lstnew("third");
// 	if (!node2)
// 		return (1);
// 	head->next = node1;
// 	head->next->next = node2;
// 	ptr = ft_lstlast(head);
// 	printf("[%s]\n", (char *)ptr->content);
// 	free (head);
// 	free (node1);
// 	free (node2);
// 	head = NULL;
// 	return (0);
// }