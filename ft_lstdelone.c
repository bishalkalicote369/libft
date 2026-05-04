/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 12:45:35 by bbk               #+#    #+#             */
/*   Updated: 2026/05/03 15:19:12 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_del(void *content)
// {
// 	free(content);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// int	main(void)
// {
// 	char	*text;
// 	t_list	*node;

// 	text = ft_strdup("HELLO");
// 	node = ft_lstnew(text);

// 	printf("%s", (char *)node->content);
// 	ft_lstdelone(node, &ft_del);
// 	return (0);
// }