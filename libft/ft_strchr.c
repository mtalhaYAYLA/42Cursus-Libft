/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:39:47 by myayla            #+#    #+#             */
/*   Updated: 2022/10/13 14:16:46 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == (char)c)
			return ((char *)&str[index]);
		index++;
	}
	if (c == '\0')
		return ((char *)(str + index));
	return (NULL);
}
// soldan baslayarak bir kelimede istedigimiz kelimeyi bulunca
// devamını döndürür
// '\0' gönderilirse de dizenin sonunu göstereceği için
// hiç bir şey görmeyiz boş gönderirse de null değer döndürür