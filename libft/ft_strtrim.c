/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:36:09 by myayla            #+#    #+#             */
/*   Updated: 2022/10/14 16:24:12 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checker(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (s1 == 0 || set == 0)
		return (NULL);
	j = ft_strlen(s1);
	while (s1[i] && checker(s1[i], set))
		i++;
	while (j > i && checker(s1[j - 1], set))
		j--;
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!str)
		return (NULL);
	while (i < j)
		str[k++] = s1[i++];
	str[k] = '\0';
	return (str);
}
//stringde belirlediğimiz karakterleri baştan ve sondan kırpar
/*
int main()
{
	char *s1 = "**merhaba**";
	char *s2 = "*";

	printf("%s",ft_strtrim(s1,s2));
}*/