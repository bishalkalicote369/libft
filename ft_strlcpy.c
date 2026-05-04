/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:11:06 by bbk               #+#    #+#             */
/*   Updated: 2026/04/27 14:02:29 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	if (size > 0)
	{
		while (src[len] != '\0' && len < size - 1)
		{
			dst[len] = src[len];
			len++;
		}
		dst[len] = '\0';
	}
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	username[40] = "bishalkalicote";
// 	char	buf[10];
// 	size_t	len;

// 	len = ft_strlcpy(buf, username, sizeof(buf));
// 	printf("NAME: %s\n", buf);
// 	printf("length of username: %ld\n", len);
// 	printf("Buffer size: %ld\n", sizeof(buf));
// 	if (len >= sizeof(buf))
// 	{
// 		printf("Truncated! Some characters were cut off.\n");
// 		printf("because buf can hold [%ld] char\n", sizeof(buf));
// 		printf("you are putting [%ld] char\n", len);
// 	}
// 	else
// 		printf("Fits perfectly!\n");
// 	return (0);
// }
