/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 14:41:21 by galauren          #+#    #+#             */
/*   Updated: 2025/01/19 19:52:57 by galauren         ###   ########.fr       */
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
		if (check_doubles(str + i) == -42)
			return (-42);
	}
	if (i < 2)
		return (-42);
	return (i);
}

int	is_whitespace(char c)
{
	return (c == ' ' || c == '\f' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v');
}

int	placed_in_base(char *base, char c)
{
	int	i;

	i = -1;
	while (base[++i])
		if (base[i] == c)
			return (i);
	return (-42);
}

//#include <stdio.h>
int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	res;
	int	base_len;
	int	ret;

	i = -1;
	sign = 1;
	res = 0;
	ret = 0;
	base_len = ft_special_strlen(base);
	if (ret == -42 || base_len == -42)
		return (0);
	while (str[++i] != '\0' && is_whitespace(str[i]))
		;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] && ret != -42)
	{
		ret = placed_in_base(base, str[i]);
		if (ret != -42)
			res = res * base_len + ret;
		++i;
	}
	return (res * sign);
}
/*
int	main()
{
	printf("LA REPONSE |%d|", ft_atoi_base("money", "poneyvifam"));
}*/
