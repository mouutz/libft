/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msahli <msahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 09:14:09 by msahli            #+#    #+#             */
/*   Updated: 2021/01/23 09:22:23 by msahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		num_len(int n)
{
	int len;

	len = 1;
	while (n /= 10)
		len++;
	return (len);
}

static void		rec_itoa(char *p, unsigned int n, int len)
{
	if (n / 10)
	{
		p[--len] = '0' + n % 10;
		n = n / 10;
		rec_itoa(p, n, len);
	}
	else
		p[0] = '0' + n;
}

char			*ft_itoa(int n)
{
	unsigned int	num;
	unsigned int	len;
	char			*p;

	len = num_len(n);
	if (n < 0)
		p = malloc(len + 2);
	else
		p = malloc(len + 1);
	if (!p)
		return (NULL);
	p[len] = '\0';
	num = n;
	if (n < 0)
	{
		p[len + 1] = '\0';
		p[0] = '-';
		num = -n;
		rec_itoa(p + 1, num, len);
	}
	else
		rec_itoa(p, num, len);
	return (p);
}
