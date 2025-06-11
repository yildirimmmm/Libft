/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhyildi <muhyildi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:22:51 by muhyildi          #+#    #+#             */
/*   Updated: 2025/06/11 16:49:33 by muhyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*srcs;

	if (!dest && !src)
		return (NULL);
	dst = (unsigned char *)dest;
	srcs = (const unsigned char *)src;
	if (dst < srcs)
	{
		while (n--)
			*dst++ = *srcs++;
	}
	else if (dst > srcs)
	{
		while (n--)
			dst[n] = srcs[n];
	}
	return (dest);
}
