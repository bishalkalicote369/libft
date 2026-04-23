/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:12:48 by bbk               #+#    #+#             */
/*   Updated: 2026/04/21 17:39:01 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c < 65 || c > 90)
	{
		if (c < 97 || c > 122)
			return (0);
	}
	return (1);
}
/*int	main(void)
{
	printf("%d\n", ft_isalpha('c'));
	printf("%d\n", ft_isalpha('Z'));
	printf("%d\n", ft_isalpha('1'));
	printf("%d\n", ft_isalpha('@'));
	printf("%d\n", ft_isalpha('Q'));
	return (0);
}*/
