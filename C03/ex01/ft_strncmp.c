/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:58:20 by galauren          #+#    #+#             */
/*   Updated: 2025/01/18 16:55:55 by galauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = -1;
	while (++i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	printf("le MIEN : \e[4;45m%d\n", ft_strncmp("64wlsaug","salttte", 6));
	printf("le LEUR : \e[4;44m%d\n", strncmp(NULL,"salttte", 6));
}*/
