/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 14:41:21 by galauren          #+#    #+#             */
/*   Updated: 2025/01/19 18:20:50 by galauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	check_doubles(char *base)
{
	int			i;
	char		c;

	i = 0;
	c = base[i];
	while (base[++i])
		if (base[i] == c)
			return (-42);
	return (1);
}

int	ft_special_strlen(char *str)
{
	int		i;

	i = -1;
	if (!str)
		return (-42);
	while (str[++i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-' || check_doubles(str + i) == -42)
			return (-42);
	}
	if (i < 2)
		return (-42);
	return (i);
}

void	ft_printnbr(unsigned int nb, char *base, int base_len)
{
	char	c;

	c = base[nb % base_len];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nb, char *base)
{
	char			c;
	unsigned int	i;
	int				base_len;

	base_len = ft_special_strlen(base);
	if (base_len == -42)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		i = -nb;
	}
	else
		i = nb;
	if (i / base_len > 0)
	{
		ft_putnbr_base(i / base_len, base);
		ft_printnbr(i, base, base_len);
	}
	else
	{
		c = base[i];
		write(1, &c, 1);
	}
}

int	main()
{
	ft_putnbr_base(5456, "01234P6789");
}
