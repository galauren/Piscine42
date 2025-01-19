/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:08:16 by galauren          #+#    #+#             */
/*   Updated: 2025/01/19 19:23:28 by galauren         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	i;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size < dst_len)
		return (size + src_len);
	i = -1;
	while (src[++i] && dest[dst_len + i] && dst_len + i < size - 1)
		dest[dst_len + i] = src[i];
	dest[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
//const char src1[100]	= "123i4";
//char dest1[100]   = "abg4ffffffffffffffffhhfv";
char src[5]	= "123i4";
char dest[100]	=   "abg4ffffffffffffffffhhfv";

//size_t 		nb = 25;
unsigned int 	nb2 = 250;

//printf("Str: %d  | %s\n", strlcat(dest1, src1, nb), dest1);
printf("Str: %u   | %s\n", ft_strlcat(dest, src, nb2), dest);
return (0);
}*/
