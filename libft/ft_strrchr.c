/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:58:56 by myayla            #+#    #+#             */
/*   Updated: 2022/10/18 11:16:51 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	unsigned char	letter;

	letter = (unsigned char)c;
	i = 0;
	while (str[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (str[i] == letter)
		{
			return (((char *)str) + i);
		}
		i--;
	}
	return (NULL);
}

// sagdan baslayarak istedigimiz harfi bulur ve kelimeyi döndürür