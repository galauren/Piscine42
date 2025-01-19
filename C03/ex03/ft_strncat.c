/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:58:49 by galauren          #+#    #+#             */
/*   Updated: 2025/01/18 17:08:07 by galauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = -1;
	if (!dest || !src)
		return (NULL);
	while (dest[++i] != '\0')
		;
	j = -1;
	while (++j < nb && src[j] != '\0')
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dest[255] = "Hello ";
	char	src[] = "World!\n";

	ft_strncat(dest, src);
	printf("%s", dest);
	return (0);
}*/
