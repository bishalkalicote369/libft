/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:57:28 by bbk               #+#    #+#             */
/*   Updated: 2026/04/30 23:09:23 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	long	num;

	num = n;
	size = ft_size(n);
	str = malloc(sizeof(char) * (size +1));
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	while (num)
	{
		str[size - 1] = (num % 10) + '0';
		num = num / 10;
		size--;
	}
	return (str);
}

// int	main(void)
// {
// 	char	*int_as_char;
// 	int		tests[] = {0, 5, 100, -42, 987654321, -2147483648};
// 	int		i;

// 	i =  0;
//     while (i < 6)
//     {
//         int_as_char = ft_itoa(tests[i]);
//         printf("%d -> \"%s\"\n", tests[i], int_as_char);
//         free(int_as_char);
// 		i++;
//     }

//     return (0);
// }
