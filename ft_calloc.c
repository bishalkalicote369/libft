/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 22:12:57 by bbk               #+#    #+#             */
/*   Updated: 2026/04/29 15:03:47 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (size != 0 && n > ((size_t)-1) / size)
		return (NULL);
	ptr = malloc (n * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, n * size);
	return (ptr);
}

// int	main(void)
// {
// 	char	str[] = "hello";
// 	char	*clean;

// 	clean = ft_calloc(sizeof(str), sizeof(char));
// 	printf("[%s]\n", clean);
// 	free(clean);
// 	clean = NULL;
// 	return (0);
// }
