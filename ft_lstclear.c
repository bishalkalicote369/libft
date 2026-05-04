/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 15:22:06 by bbk               #+#    #+#             */
/*   Updated: 2026/05/03 17:35:20 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*i;
	t_list	*tmp;

	if (!lst)
		return ;
	i = *lst;
	while (i != NULL)
	{
		tmp = i->next;
		del(i->content);
		free(i);
		i = tmp;
	}
	*lst = NULL;
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*i;

// 	head = ft_lstnew(ft_strdup("NODE1"));
// 	if (!head)
// 		return (1);
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("NODE2")));
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("NODE3")));
// 	i = head;
// 	while (i != NULL)
// 	{
// 		printf("%s\n", (char *)i->content);
// 		i = i->next;
// 	}
// 	ft_lstclear(&head, free);
// 	return (0);
// }