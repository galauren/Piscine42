/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:58:33 by galauren          #+#    #+#             */
/*   Updated: 2025/01/18 16:54:56 by galauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	if (!s1 || !s2)
		return (NULL);
	while (s1[++i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("le RESULTAT : \e[5;40m%d\n", ft_strcmp("salut","plute"));
}*/
