/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msahli <msahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 09:20:29 by msahli            #+#    #+#             */
/*   Updated: 2021/01/23 09:22:23 by msahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *d, const char *s, size_t size)
{
	unsigned int	size_s;
	int				i;

	if (!d || !s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	size_s = i;
	i = 0;
	if (size_s + 1 < size)
		ft_strncpy(d, s, size_s + 1);
	else if (size != 0)
	{
		ft_strncpy(d, s, size - 1);
		d[size - 1] = '\0';
	}
	return (size_s);
}
