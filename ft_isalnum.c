/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:38:29 by bbk               #+#    #+#             */
/*   Updated: 2026/04/27 12:09:29 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((ft_isalpha(c)) || ft_isdigit(c));
}

// int	main(void)
// {
// 	char	*username = "bikf1";
// 	int		i;

// 	i = 0;
// 	while (username[i] != '\0')
// 	{
// 		if (ft_isalnum(username[i]))
// 		{
// 			printf("Valid username all are num %c\n", username[i]);
// 		}
// 		else
// 			printf("Invalid username\n");
// 		i++;
// 	}
// }
