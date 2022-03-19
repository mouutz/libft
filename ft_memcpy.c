/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msahli <msahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 09:16:28 by msahli            #+#    #+#             */
/*   Updated: 2021/01/23 09:22:23 by msahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *copy;

	if (n && (!dst && !src))
		return (NULL);
	copy = dst;
	while (n--)
		*(unsigned char *)dst++ = *(unsigned char *)src++;
	return (copy);
}
