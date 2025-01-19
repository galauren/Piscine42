/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:56:19 by galauren          #+#    #+#             */
/*   Updated: 2025/01/18 18:49:07 by galauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	if (str)
		while (str[++i] != '\0')
			write(1, &str[i], 1);
}
/*
int main()
{
	char str[150] = "jkewgfqkgfqg ig iqfgkqfaitydfKDTFEW Kdtfe dkfe";

	ft_putstr(str);
	ft_putstr(NULL);
	return (0);
}*/
