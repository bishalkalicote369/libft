/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:01:57 by bbk               #+#    #+#             */
/*   Updated: 2026/05/03 14:43:08 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*n_node;

	if (!lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	n_node = ft_lstlast(*lst);
	n_node->next = new;
}

// int	main(void)
// {
// 	t_list		*node1;
// 	t_list		*node2;
// 	t_list		*new;
// 	t_list		*head;

// 	node1 = ft_lstnew("[NODE1]");
// 	if (!node1)
// 		return (1);
// 	node2 = ft_lstnew("[NODE2]");
// 	if (!node2)
// 		return (1);
// 	new = ft_lstnew("[NEW]");
// 	if (!new)
// 		return (1);
// 	node1->next = node2;
// 	ft_lstadd_back(&node1, new);

// 	head = node1;
// 	while (head != NULL)
// 	{
// 		printf("%s\n", (char *)head->content);
// 		head = head->next;
// 	}
// 	free (node1);
// 	free (node2);
// 	free (new);
// 	node1 = NULL;
// 	return (0);
// }

// void	change(char **ptr)
// {
// 	**ptr = "hari";
// }

// int	main(void)
// {
// 	char	*name;

// 	name = "iufu";
// 	change(&name);
// 	printf("%s\n", name);
// 	return (0);
// }