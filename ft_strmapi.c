/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 22:23:32 by bbk               #+#    #+#             */
/*   Updated: 2026/04/29 23:01:56 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	mask_password(unsigned int i, char c)
// {
// 	if (i < 2 || i > 5)
// 		return (c);
// 	return ('*');
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	if (!s)
		return (NULL);
	new_str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// int	main(void)
// {
// 	char	*input_pass = "france11";
// 	char	*showing_pass;

// 	showing_pass = ft_strmapi(input_pass, mask_password);
// 	printf("%s\n", showing_pass);
// 	free(showing_pass);
// 	showing_pass = NULL;
// 	return (0);
// }