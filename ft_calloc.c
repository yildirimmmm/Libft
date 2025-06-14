/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhyildi <muhyildi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 23:38:41 by muhyildi          #+#    #+#             */
/*   Updated: 2025/06/14 03:45:57 by muhyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_static_bzero(void *s, size_t n)
{
	unsigned char	*adr;

	adr = (unsigned char *)s;
	while (n--)
		*adr++ = 0;
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			allocate_size;
	unsigned char	*dst;

	allocate_size = nmemb * size;
	dst = malloc(allocate_size);
	if (dst != NULL)
	{
		ft_static_bzero(dst, allocate_size);
		return (dst);
	}
	return (NULL);
}
