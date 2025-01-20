/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:14:48 by galauren          #+#    #+#             */
/*   Updated: 2025/01/20 16:27:51 by galauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	ret;

	ret = 1;
	if (nb < 0)
		ret = 0;
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}
/*
#include <stdio.h>
int main()
{
	int	i = -1;

	while (++i < 33)
		printf("Factorielle(%d) -> |%d|\n", i, ft_recursive_factorial(i));
}*/
