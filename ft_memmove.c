/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:53:31 by bbk               #+#    #+#             */
/*   Updated: 2026/04/29 22:08:57 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove( void *dest, const void *src, size_t n)
{
	unsigned char		*t_dest;
	const unsigned char	*t_src;

	if (!dest || !src)
		return (NULL);
	t_dest = (unsigned char *)dest;
	t_src = (const unsigned char *)src;
	if (t_dest > t_src && n > 0)
	{
		n = n - 1;
		while (n > 0)
		{
			t_dest[n] = t_src[n];
			n--;
		}
		t_dest[0] = t_src[0];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

// int	main(void)
// {
// 	char	str[] = "345612";
// 	char	str1[] = "345612";

// 	//memmove(str + 2, str, 4);
// 	printf("%s\n", str);
// 	memmove(str1 + 2, str1, 5);
// 	printf("%s\n", str1);
// 	return (0);
// }
