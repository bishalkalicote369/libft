/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:51:56 by bbk               #+#    #+#             */
/*   Updated: 2026/04/29 19:36:33 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*url = "http://42.fr/";
// 	char	*secure = "https://";
// 	char	*unsecure = "http://";

// 	if (ft_strncmp(url, secure , 8) == 0)
// 		printf("secure site\n");
// 	else if (ft_strncmp(url, unsecure, 7) == 0)
// 		printf("unsecure sitee \n");
// 	return (0);
// }
