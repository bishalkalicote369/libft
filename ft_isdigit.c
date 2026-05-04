/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:30:07 by bbk               #+#    #+#             */
/*   Updated: 2026/04/29 22:10:45 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

// int	main(void)
// {
// 	char	*phonenum = "eeee";
// 	int		i;

// 	i = 0;
// 	while (phonenum[i] != '\0')
// 	{
// 		if (ft_isdigit(phonenum[i]))
// 		{
// 			printf("Valid phonenum all are num %d\n", phonenum[i]);
// 		}
// 		else
// 			printf("Invalid phonenum\n");
// 		i++;
// 	}
// }