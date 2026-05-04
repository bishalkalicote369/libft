/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 15:41:53 by bbk               #+#    #+#             */
/*   Updated: 2026/04/27 16:04:16 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;

	copy = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s, ft_strlen(s) + 1);
	return (copy);
}

// int	main(void)
// {
// 	char src[] = "Hello";
// 	char *dst;

// 	dst = ft_strdup(src);
// 	printf("Copied: %s\n", dst);
// 	free(dst);
// 	return (0);
// }