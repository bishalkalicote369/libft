/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@learner.42.tech>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:30:07 by bbk               #+#    #+#             */
/*   Updated: 2026/04/21 12:42:26 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_isdigit('8'));
	printf("%d\n", ft_isdigit('#'));
	printf("%d\n", ft_isdigit('B'));
	printf("%d\n", ft_isdigit('a'));
	return (0);
}*/
