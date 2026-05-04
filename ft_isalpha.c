/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:12:48 by bbk               #+#    #+#             */
/*   Updated: 2026/05/04 20:15:46 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'a' - 32 && c <= 'z' - 32));
}

// int	main(void)
// {
// 	char	*name = "Bishal";
// 	int		i;

// 	i = 0;
// 	while (name[i] != '\0')
// 	{
// 		if (ft_isalpha(name[i]))
// 		{
// 			printf("Valid name all are alpha %c\n", name[i]);
// 		}
// 		else
// 			printf("Invalid Name\n");
// 		i++;
// 	}
// }
