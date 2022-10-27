/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:09:53 by myayla            #+#    #+#             */
/*   Updated: 2022/10/13 16:36:30 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*nev;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	nev = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!nev)
		return (NULL);
	while (s1[i])
	{
		nev[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		nev[i] = s2[j];
		i++;
		j++;
	}
	nev[i] = '\0';
	return (nev);
}
//gelen dizeleri birleştirip tek bir dize haline dönüştürür
/*
int	main(void)
{
	char	*t = "yayla";
	char	*y = "bey";

	printf("%s",ft_strjoin(t,y));
}
*/