/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:57:32 by galauren          #+#    #+#             */
/*   Updated: 2025/01/20 16:28:03 by galauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ret;

	ret = 1;
	if (nb < 0)
		ret = 0;
	while (nb > 1)
		ret = ret * nb--;
	return (ret);
}
/*
#include <stdio.h>
int main()
{
	int	i = -1;

	while (++i < 100)
		printf("Factorielle(%d) -> |%d|\n", i, ft_iterative_factorial(i));
}*/
