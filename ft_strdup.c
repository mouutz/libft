/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msahli <msahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 09:20:07 by msahli            #+#    #+#             */
/*   Updated: 2021/01/23 09:22:23 by msahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	int		len;
	char	*p;

	len = ft_strlen(src);
	if ((p = malloc(len + 1)) == NULL)
		return (NULL);
	else
		return (ft_strcpy(p, src));
}
