/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:36:59 by bbk               #+#    #+#             */
/*   Updated: 2026/04/23 14:37:17 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		if (*p != (unsigned char)c)
			p++;
		else
			return (p);
	}
	return (0);
}

int	main(void)
{
	char myStr[] = "Hello World!";
	char *myPtr = (char*)memchr(myStr, 'x', 5);
	printf("[%s]\n", myPtr);

	char myStr1[] = "Hello World!";
	char *myPtr1 = (char*)ft_memchr(myStr1, 'X', 5);
	printf("[%s]\n", myPtr1);

}