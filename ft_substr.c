/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 19:04:37 by bbk               #+#    #+#             */
/*   Updated: 2026/04/29 22:11:13 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// s → the original string (the one you want to cut from)
// start → where to start cutting (which index/position)
// len → the maximum number of characters you want to take

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*chunk;
	size_t	s_len;
	size_t	a_len;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= s_len)
		return (ft_strdup(""));
	a_len = s_len - start;
	if (len > a_len)
		len = a_len;
	chunk = malloc((len + 1) * sizeof(char));
	if (!chunk)
		return (NULL);
	ft_memcpy(chunk, &s[start], len);
	chunk[len] = '\0';
	return (chunk);
}

// int	main(void)
// {
// 	char	str[12];
// 	char	*substr;

// 	str[0] = 'H';
// 	str[1] = 'e';
// 	str[2] = 'l';
// 	str[3] = 'l';
// 	str[4] = 'o';
// 	str[5] = ' ';
// 	str[6] = 'w';
// 	str[7] = 'o';
// 	str[8] = 'r';
// 	str[9] = 'l';
// 	str[10] = 'd';
// 	str[11] = '\0';

// 	substr = ft_substr(str, 3, 3);
// 	printf("[%s]\n", substr);
// 	free(substr);
// 	substr = NULL;
// }