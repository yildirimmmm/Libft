/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhyildi <muhyildi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 07:39:05 by muhyildi          #+#    #+#             */
/*   Updated: 2025/06/17 01:15:37 by muhyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	word_count;
	int	is_word;

	i = 0;
	word_count = 0;
	is_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && is_word == 0)
		{
			is_word = 1;
			word_count++;
		}
		else if (s[i] == c)
		{
			is_word = 0;
		}
		i++;
	}
	return (word_count);
}

static char	*get_word(char const *s, char sep, int *pos)
{
	char	*word;
	int		len;
	int		start;
	int		i;

	while (s[*pos] == sep && s[*pos])
		(*pos)++;
	start = *pos;
	len = 0;
	while (s[*pos] != sep && s[*pos])
	{
		len++;
		(*pos)++;
	}
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_allocated(char **arr, int i)
{
	while (i--)
		free(arr[i]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;
	int		i;
	int		pos;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	pos = 0;
	i = 0;
	while (i < word_count && s[pos])
	{
		result[i] = get_word(s, c, &pos);
		if (!result[i])
		{
			free_allocated(result, i);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}
