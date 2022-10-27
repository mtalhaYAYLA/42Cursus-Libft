/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:45:15 by myayla            #+#    #+#             */
/*   Updated: 2022/10/13 15:05:28 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dsize;

	dsize = 0;
	while (dest[dsize] != '\0' && dsize < size)
			dsize++;
	i = dsize;
	while (src[dsize - i] && dsize +1 < size)
	{
		dest[dsize] = src[dsize - i];
		dsize++;
	}
	if (i < size)
			dest[dsize] = '\0';
	return (i + ft_strlen(src));
}
// dest'in yanına src'yi ekler fakat ekleme yaparken size
// dest'in uzunluğundan sayarak başlar
// bu nedenlse size - dlen yapıyoruz
// -1 yaparak bir eksik karakter alıyoruz ki
// dest'in sonuna null karakteri de ekleyebilelim
// -1 yapmasaydık 1 karakter fazla alıp NULL u da ekleyecekti
// ve bu sefer istediğimizden 1 fazla karakter kopyalamış olacaktı