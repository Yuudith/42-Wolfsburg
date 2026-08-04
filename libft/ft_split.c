/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtripp <jtripp@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 20:57:10 by jtripp            #+#    #+#             */
/*   Updated: 2026/08/04 16:03:52 by jtripp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (count);
}

static void	ft_free_split(char **result, size_t words_done)
{
	size_t	i;

	i = 0;
	while (i < words_done)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static int	ft_fill_split(char **result, char const *s, char c)
{
	size_t	i;
	size_t	word_i;
	size_t	len;

	i = 0;
	word_i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			len = ft_word_len(&s[i], c);
			result[word_i] = ft_substr(s, i, len);
			if (result[word_i] == NULL)
			{
				ft_free_split(result, word_i);
				return (0);
			}
			word_i++;
			i += len;
		}
	}
	result[word_i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (s == NULL)
		return (NULL);
	result = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (result == NULL)
		return (NULL);
	if (ft_fill_split(result, s, c) == 0)
		return (NULL);
	return (result);
}
