/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhyildi <muhyildi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:44:28 by muhyildi          #+#    #+#             */
/*   Updated: 2025/05/31 14:59:58 by muhyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last_index;

	i = 0;
	last_index = -1;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last_index = i;
		i++;     
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	if (last_index != -1)
		return ((char *)&s[last_index]);
	return (NULL);
}