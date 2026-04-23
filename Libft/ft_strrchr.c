/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 21:46:15 by bbk               #+#    #+#             */
/*   Updated: 2026/04/23 10:57:57 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if ((char)c == 0)
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if ((char)c == s[i])
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

int	main(void)
{
	printf("%s\n", strrchr("hello.txt.tar", '.'));
	printf("%s\n", ft_strrchr("hello.txt.tar", '.'));
	printf("an char uses %zu bytes of memory\n", sizeof(unsigned char));
}
