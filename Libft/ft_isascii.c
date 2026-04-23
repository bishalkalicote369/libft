/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@learner.42.tech>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:55:15 by bbk               #+#    #+#             */
/*   Updated: 2026/04/21 12:45:33 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii('$'));
	printf("%d\n", ft_isascii('9'));
	printf("%d\n", ft_isascii('Z'));
	printf("%d\n", ft_isascii(127));
	return (0);
}*/
