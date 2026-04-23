/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:53:31 by bbk               #+#    #+#             */
/*   Updated: 2026/04/23 17:39:31 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memmove( void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*t_dest;
	unsigned char	*t_src;

	if (!dest || !src)
		return (NULL);
	t_dest = (unsigned char *)dest;
	t_src = (unsigned char *)src;
	i = 0;
	if (t_dest > t_src)
		while (n-- > 0)
			t_dest[n] = t_src[n];
	else
	{
		while (i < n)
		{
			t_dest[i] = t_src[i];
			i++;
		}
	}
	return (dest);
}

int	main(void)
{
	char	bishal[] = "hellohowareyou";
	char	bishal[] = "hellohowareyou";

	// memmove(bishal + 7, bishal + 5, 3);
	// printf("%s\n", bishal);
	ft_memmove(bishal + 7, bishal + 5, 3);
	printf("%s\n", bishal);
	return (0);
}
