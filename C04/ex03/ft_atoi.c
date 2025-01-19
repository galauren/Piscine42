/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 18:49:19 by galauren          #+#    #+#             */
/*   Updated: 2025/01/19 18:14:43 by galauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_atoi(" ---+--+1234567"));
}*/
