/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:01:55 by bbk               #+#    #+#             */
/*   Updated: 2026/04/29 22:11:01 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	pin_len;
	size_t	i;

	if (little[0] == '\0')
		return ((char *)big);
	pin_len = ft_strlen(little);
	i = 0;
	while (big[i] != '\0' && i + pin_len <= len)
	{
		if (ft_memcmp(&big[i], little, pin_len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *text = "Hello World";
// 	char *found = ft_strnstr(text, "World", 11);

// 	if (found)
// 		printf("Found: %s\n", found);
// 	else
// 		printf("Not found\n");
// 	return 0;
// }