/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 22:39:35 by bbk               #+#    #+#             */
/*   Updated: 2026/05/03 14:09:03 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*tmp;

// 	node1 = ft_lstnew("[NODE1]");
// 	if (!node1)
// 		return (1);
// 	node2 = ft_lstnew("[NODE2]");
// 	if (!node2)
// 		return (1);
// 	node3 = ft_lstnew("[NODE3]");
// 	if (!node3)
// 		return (1);
// 	node1->next = node2;
// 	ft_lstadd_front(&node1, node3);
// 	head = node1;
// 	while (head != NULL)
// 	{
// 		printf("%s\n", (char *)head->content);
// 		head = head->next;
// 	}

// 	head = node1;
// 	while (head != NULL)
// 	{
// 		tmp = head->next;
// 		free(head);
// 		head = tmp;
// 	}
// 	return (0);
// }