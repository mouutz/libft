/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msahli <msahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 09:21:31 by msahli            #+#    #+#             */
/*   Updated: 2021/01/23 10:12:17 by msahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	min_len;
	char			*out;

	if (!s || len <= 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	else
	{
		min_len = ft_strlen(&s[start]);
		if (min_len < len)
			len = min_len;
		if (!(out = malloc((len + 1) * sizeof(char))))
			return (NULL);
		i = start;
		while (s[i] && (i - start) < len)
		{
			out[i - start] = s[i];
			i += 1;
		}
		out[i - start] = '\0';
		return (out);
	}
}
