/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:01:55 by bbk               #+#    #+#             */
/*   Updated: 2026/04/23 17:53:04 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


char	*ft_strnstr(const char *big,	const char *little, size_t len);

int	main(void)
{
int x = 65;           // stored in memory as bytes
int *ip = &x;         // int glasses on this address
char *cp = (char *)ip; // SAME address, but now char glasses

printf("%d\n", *ip);   // 65   (reads it as a number)
printf("%c\n", *cp);   // 'A'  (reads 1 byte as a letter, 65 = 'A')
}
