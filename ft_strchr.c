/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 09:41:59 by bbk               #+#    #+#             */
/*   Updated: 2026/04/29 12:34:30 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	char			ch;

	ch = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i++;
	}
	if (ch == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// int	main(void)
// {
// 	char	*email = "bbk@gmail.com";
// 	char	c;
// 	char	*found;

// 	c = '@';
// 	found = ft_strchr(email, c);
// 	if (found)
// 		printf("your email is valid !!\n");
// 	else
// 		printf("email is not valid\n");
// 	printf("%s/n", found);
// 	return (0);
// }
