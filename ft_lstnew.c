/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 12:00:44 by bbk               #+#    #+#             */
/*   Updated: 2026/05/03 19:03:19 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int	main(void)
// {
// 	t_list	*new;

// 	new = NULL;
// 	new = ft_lstnew("hello");
// 	printf("content -> [%s] and have next-> [%s]\n",
// (char *)new->content, (char *)new->next);
// 	free(new);
// 	new = NULL;
// 	return (0);
// }

// int	main(void)
// {
// 	int		arr[6] = {5, 4, 3, 2, 1, 0};
// 	t_list	*head;
// 	t_list	*current;
// 	int		i;

// 	head = ft_lstnew(&arr[0]);
// 	if (!head)
// 		return (1);
// 	current = head;
// 	i = 1;
// 	while (i < 6)
// 	{
// 		current->next = ft_lstnew(&arr[i]);
// 		if (!current->next)
// 			return (1);
// 		current = current->next;
// 		i++;
// 	}

// 	current = head;
// 	while (current != NULL)
// 	{
// 		printf("[%d]\n", *(int *)current->content);
// 		current = current->next;
// 	}

// 	current = head;
// 	while (current != NULL)
// 	{
// 		t_list *temp = current->next;
// 		free(current);
// 		current = temp;
// 	}
// 	return (0);
// }
