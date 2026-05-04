/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@learner.42.tech>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 09:47:51 by bbk               #+#    #+#             */
/*   Updated: 2026/04/30 10:20:01 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(void)
{
	char	letter[1];

	read(0, letter, 1);
	if (!ft_isalpha(*letter))
		write(2, "not letter\n", 11);
	else
		write(1, "its ok\n", 7);
	ft_putchar_fd('B', 1);
	return (0);
}*/
