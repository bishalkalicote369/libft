/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 23:03:16 by bbk               #+#    #+#             */
/*   Updated: 2026/04/29 23:22:50 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	hide_pass(unsigned int i, char *c)
// {
// 	if (i <= 1 || i >= 6)
// 		*c = '*';
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main(void)
// {
// 	char	input_pass[] = "france11";

// 	ft_striteri(input_pass, hide_pass);
// 	printf("%s\n", input_pass);
// 	return (0);
// }