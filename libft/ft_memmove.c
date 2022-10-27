/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:32:59 by myayla            #+#    #+#             */
/*   Updated: 2022/10/17 16:29:05 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;
	int						h;

	h = (int)n;
	if (dest == src)
		return (dest);
	else if (dest < src)
		dest = ft_memcpy(dest, src, n);
	else
	{
		d = (unsigned char *)dest;
		s = (const unsigned char *)src;
		while (h--)
			d[h] = s[h];
	}
	return (dest);
}
// memcpy'den farkı çakışmaları önler
/*
int main()
{
	void *t = "aliburak";
	void *s = "mehmet";
	size_t i = 3;
	printf("%s",ft_memmove(t,s,i));
}*/