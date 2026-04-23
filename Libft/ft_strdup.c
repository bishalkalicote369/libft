/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@learner.42.tech>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:28:39 by bbk               #+#    #+#             */
/*   Updated: 2026/04/21 14:14:25 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*clone;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	clone = (char *) malloc(sizeof (char) * (i + 1));
	if (!clone)
		return (NULL);
	i = 0;
	while (s[i])
	{
		clone[i] = s[i];
		i++;
	}
	clone[i] = '\0';
	return (clone);
}

/*int	main(void)
{
	char	*org;
	char	*dup;
	int		i;

	org = "hello";
	i = 0;
	dup = ft_strdup(org);
	while (dup[i])
	{
		printf("%c", dup[i]);
		i++;
	}
	free(dup);
	return (0);
}*/
