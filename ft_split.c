/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:14:20 by bbk               #+#    #+#             */
/*   Updated: 2026/05/03 16:16:25 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_sep(char s, char c)
{
	return (s == c);
}

static int	ft_words_len(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (!ft_is_sep(s[i], c))
		{
			count++;
			while (s[i] && !ft_is_sep(s[i], c))
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*ft_split_word(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && !ft_is_sep(s[i], c))
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && !ft_is_sep(s[i], c))
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	words = malloc(sizeof(char *) * (ft_words_len(s, c) + 1));
	if (!words)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (!ft_is_sep(s[i], c))
		{
			words[j] = ft_split_word(&s[i], c);
			while (s[i] && !ft_is_sep(s[i], c))
				i++;
			j++;
		}
		else
			i++;
	}
	words[j] = NULL;
	return (words);
}

// int	main(void)
// {
// 	char	*str = "hello,world,how,are,you";
// 	char	c = ',';
// 	char	**words;
// 	int		i;

// 	words = ft_split(str, c);
// 	i = 0;
// 	while (words[i])
// 	{
// 		printf("[%s]\n", words[i]);
// 		free(words[i]);
// 		i++;
// 	}
// 	free(words);
// 	return (0);
// }
