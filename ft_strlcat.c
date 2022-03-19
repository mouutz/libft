/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msahli <msahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 09:20:22 by msahli            #+#    #+#             */
/*   Updated: 2021/01/23 10:01:55 by msahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	dst_length;
	size_t	src_length;

	dst_length = 0;
	while (dst[dst_length] != '\0' && dst_length < size)
		dst_length++;
	src_length = 0;
	while (src[src_length] != '\0')
		src_length++;
	index = 0;
	while ((src[index] != '\0') && ((index + dst_length + 1) < size))
	{
		dst[dst_length + index] = src[index];
		index++;
	}
	if (index + dst_length < size)
		dst[index + dst_length] = '\0';
	return (dst_length + src_length);
}
