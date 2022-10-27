/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:09:44 by myayla            #+#    #+#             */
/*   Updated: 2022/10/13 16:09:06 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*final;

	if (s)
	{
		if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
			return (ft_strdup(""));
		i = 0;
		while (i < len && s[i + start] != '\0')
			i++;
		final = (char *)malloc((sizeof(char) * i) + 1);
		if (!final)
			return (NULL);
		j = 0;
		while (j < i)
		{
			final[j] = s[start + j];
			j++;
		}
		final[j] = '\0';
		return (final);
	}
	return (NULL);
}
//dizede başlangıç indeksinden sonra kaç karakter alcağımızı belirtir
/*int main()
{
	char *t = "talhayaylayımben";
	unsigned int i = 5;
	size_t si = 5;
	printf("%s",ft_substr(t,i,si)); 
}*/