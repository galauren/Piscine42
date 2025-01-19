/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galauren <galauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:14:01 by galauren          #+#    #+#             */
/*   Updated: 2025/01/16 11:14:04 by galauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_printnbr(unsigned int nb)
{
	char	c;

	c = nb % 10 + 48;
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char			c;
	unsigned int	i;

	if (nb < 0)
	{
		write(1, "-", 1);
		i = -nb;
	}
	else
		i = nb;
	if (i / 10 > 0)
	{
		ft_putnbr(i / 10);
		ft_printnbr(i);
	}
	else
	{
		c = i + 48;
		write(1, &c, 1);
	}
}
