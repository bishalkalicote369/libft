/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:41:39 by bbk               #+#    #+#             */
/*   Updated: 2026/04/29 22:11:45 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int	main(void)
// {
// 	char	buf[13];

// 	ft_memset(buf, '-', 12);
// 	buf[12] = '\0';
// 	printf("First buffer [%s]\n", buf);
// 	ft_bzero(buf, 5);
// 	printf("after buffer [%s]\n", buf + 5);
// 	return (0);
// }