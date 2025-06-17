/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhyildi <muhyildi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 20:27:18 by muhyildi          #+#    #+#             */
/*   Updated: 2025/06/17 22:08:46 by muhyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	digits;

	digits = 1;
	if (n < 0)
		digits++;
	while (n / 10)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*dst;
	int		digits;
	long	nb;

	digits = count_digits(n);
	dst = (char *)malloc(sizeof(char) * (digits + 1));
	if (!dst)
		return (NULL);
	dst[digits] = '\0';
	nb = n;
	if (nb < 0)
	{
		dst[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		dst[0] = '0';
	while (nb > 0)
	{
		dst[--digits] = (nb % 10) + '0';
		nb /= 10;
	}
	return (dst);
}
