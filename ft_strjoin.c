/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 20:59:01 by bbk               #+#    #+#             */
/*   Updated: 2026/04/27 21:54:40 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	joined = malloc (sizeof(char) * (len_s1 + len_s2 + 1));
	if (!joined)
		return (NULL);
	ft_memcpy(joined, s1, len_s1);
	ft_memcpy(joined + len_s1, s2, len_s2);
	joined[len_s1 + len_s2] = '\0';
	return (joined);
}

// int	main(void)
// {
// 	char	*name = "";
// 	char	*last = "Paris";
// 	char	*college;

// 	college = ft_strjoin(name, last);
// 	printf("%s\n", college);
// 	free(college);
// 	return (0);
// }
