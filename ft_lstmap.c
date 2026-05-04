/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 18:06:04 by bbk               #+#    #+#             */
/*   Updated: 2026/05/03 19:46:30 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*mask_password(void *content)
// {
// 	char	*str;
// 	char	*new_str;
// 	int		i;

// 	str = (char *)content;
// 	new_str = ft_strdup(str);
// 	if (!new_str)
// 		return (NULL);
// 	i = 0;
// 	while (new_str[i])
// 	{
// 		if (new_str[i] >= 'a' && new_str[i] <= 'z')
// 			new_str[i] -= 32;
// 		i++;
// 	}
// 	return (new_str);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		if (f)
			new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*i;
// 	t_list	*new;
// 	t_list	*j;

// 	head = ft_lstnew(ft_strdup("node1"));
// 	if (!head)
// 		return (1);
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("node2")));
// 	ft_lstadd_back(&head, ft_lstnew(ft_strdup("node3")));
// 	new = ft_lstmap(head, &mask_password, free);
// 	i = head;
// 	while (i != NULL)
// 	{
// 		printf("%s\n", (char *)i->content);
// 		i = i->next;
// 	}
// 	j = new;
// 	while (j != NULL)
// 	{
// 		printf("%s\n", (char *)j->content);
// 		j = j->next;
// 	}
// 	ft_lstclear(&head, free);
// 	ft_lstclear(&new, free);
// 	return (0);
// }