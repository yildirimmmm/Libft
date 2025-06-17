/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhyildi <muhyildi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 04:36:38 by muhyildi          #+#    #+#             */
/*   Updated: 2025/06/17 19:42:46 by muhyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*srcs;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	dst = (unsigned char *)dest;
	srcs = (unsigned char *)src;
	i = 0;
	while (n--)
	{
		dst[i] = srcs[i];
		i++;
	}
	return (dest);
}
