/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msahli <msahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 09:21:22 by msahli            #+#    #+#             */
/*   Updated: 2021/01/23 09:22:23 by msahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		i;

	p = (char *)s;
	i = 0;
	while (p[i])
		i++;
	if (!c)
		return (&p[i]);
	while (i && p[i] != c)
		i--;
	if (p[i] == c)
		return (&p[i]);
	else
		return (NULL);
}
