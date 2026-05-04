/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 13:41:12 by bbk               #+#    #+#             */
/*   Updated: 2026/05/02 10:09:07 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	int		lenofchain;

// 	node1 = ft_lstnew("CONTENT1");
// 	if (!node1)
// 		return (1);
// 	node2 = ft_lstnew("CONTENT2");
// 	if (!node2)
// 		return (1);
// 	node3 = ft_lstnew("CONTENT3");
// 	if (!node3)
// 		return (1);
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;

// 	lenofchain = ft_lstsize(node1);
// 	printf("%d\n", lenofchain);

// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	return (0);
// }