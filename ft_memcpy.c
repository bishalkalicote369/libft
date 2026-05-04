/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:23:56 by bbk               #+#    #+#             */
/*   Updated: 2026/04/29 10:46:11 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*t_dest;
	const unsigned char		*t_src;

	t_dest = (unsigned char *)dest;
	t_src = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		t_dest[i] = t_src[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "hello world 42";
// 	char	dest[4];

// 	ft_memcpy(dest, src, 3);
// 	printf("%s\n", dest);
// 	return (0);
// }
