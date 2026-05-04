/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 17:36:08 by bbk               #+#    #+#             */
/*   Updated: 2026/05/03 17:59:27 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	mask_password(void *content)
// {
// 	char	*str;

// 	str = (char *)content;
// 	while (*str)
// 	{
// 		if (*str >= 'a' && *str <= 'z')
// 		{
// 			*str -= 32;
// 		}
// 		str++;
// 	}
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*i;

// 	head = ft_lstnew(ft_strdup("node1"));
// 	if (!head)
// 		return (1);
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("node2")));
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("node3")));
// 	ft_lstiter(head, &mask_password);
// 	i = head;
// 	while (i != NULL)
// 	{
// 		printf("%s\n", (char *)i->content);
// 		i = i->next;
// 	}
// 	ft_lstclear(&head, free);
// 	return (0);
// }