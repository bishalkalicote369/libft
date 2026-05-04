/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:55:15 by bbk               #+#    #+#             */
/*   Updated: 2026/04/27 12:55:12 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int	main(void)
// {
// 	char 	*text = "Café";
// 	int		i;

// 	i = 0;
// 	while (text[i] != '\0')
// 	{
// 		if (ft_isascii((unsigned char)text[i]))
// 		{
// 			printf("Valid text all are num %d\n",(unsigned char)text[i]);
// 		}
// 		else
// 			printf("Invalid text\n");
// 		i++;
// 	}
// }
