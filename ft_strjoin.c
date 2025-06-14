/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhyildi <muhyildi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 05:19:10 by muhyildi          #+#    #+#             */
/*   Updated: 2025/06/14 05:47:55 by muhyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;
	char	*dst;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dst = malloc((s1_len + s2_len) + 1);
	if (dst == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < s1_len)
		dst[i++] = s1[j++];
	j = 0;
	while (i < s1_len + s2_len)
		dst[i++] = s2[j++];
	dst[i] = '\0';
	return (dst);
}
