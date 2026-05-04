/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 21:46:15 by bbk               #+#    #+#             */
/*   Updated: 2026/04/29 12:44:54 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		i;

	ch = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*filename = "hello.txt.tar.exe";
// 	char	c;
// 	char	*found;

// 	c = '.';
// 	found = ft_strrchr(filename, c);
// 	if (found)
// 		printf("your have that file !!\n");
// 	else
// 		printf("you dont have thar file\n");
// 	printf("%s\n", found);
// 	return (0);
// }