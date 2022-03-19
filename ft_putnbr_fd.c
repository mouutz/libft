/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msahli <msahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 09:17:39 by msahli            #+#    #+#             */
/*   Updated: 2021/01/23 09:22:23 by msahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	rec_ft_putnbr(unsigned int nb, int fd)
{
	char c;

	if (nb)
	{
		c = '0' + (nb % 10);
		rec_ft_putnbr(nb / 10, fd);
		write(fd, &c, 1);
	}
}

void		ft_putnbr_fd(int nb, int fd)
{
	unsigned int wrapper;

	wrapper = nb;
	if (nb < 0)
	{
		write(fd, "-", 1);
		wrapper = -nb;
	}
	if (nb == 0)
		write(fd, "0", 1);
	else
		rec_ft_putnbr(wrapper, fd);
}
