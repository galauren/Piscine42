/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 14:29:53 by galauren          #+#    #+#             */
/*   Updated: 2025/01/19 19:10:51 by galauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	if (!str || !to_find)
		return (0);
	while (str[++i] != '\0' && to_find[j] != '\0')
	{
		if (str[i] != to_find[j])
			j = 0;
		else
			++j;
		if (to_find[j] == '\0')
			return (str + i - (j - 1));
	}
	return (str);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[500] = "jaimerai beaucoup apouvoir reflechir sans avoir a poser mes idees sur papier, genre devenir un nsuper computer dansma tete ta capte";

	printf("la reponse : \n|%s|\n", ft_strstr(str, ""));
	printf("la reponse : \n|%s|\n", strstr(str, ""));
}
