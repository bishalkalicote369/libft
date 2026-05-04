/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 18:13:48 by bbk               #+#    #+#             */
/*   Updated: 2026/04/27 13:00:33 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int	main(void)
// {
// 	char 	*text = "hello\tworld";
// 	int		i;

// 	i = 0;
// 	while (text[i] != '\0')
// 	{
// 		if (ft_isprint((unsigned char)text[i]))
// 		{
// 			printf("is printable %d\n",(unsigned char)text[i]);
// 		}
// 		else
// 			printf("is nonprintable %d,\n", (unsigned char)text[i]);
// 		i++;
// 	}
// }
