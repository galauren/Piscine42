/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 14:41:21 by galauren          #+#    #+#             */
/*   Updated: 2025/01/19 17:41:57 by galauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		check_doubles(char *base)
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

int		ft_special_strlen(char *str)
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
	return (i < 2 ? -42 : i);
}

int	is_whitespace(char c)
{
	return (c == ' ' || c == '\f' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v');
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = -1;
	sign = 1;
	res = 0;
	while (str[++i] != '\0' && is_whitespace(str[i]))
		;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		++i;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		++i;
	}
	return (res * sign);
	
}


int main()
{
	ft_putnbr_base(5456, "01234P67892");
}
