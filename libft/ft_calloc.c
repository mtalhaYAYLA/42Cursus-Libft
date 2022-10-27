/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:37:18 by myayla            #+#    #+#             */
/*   Updated: 2022/10/18 16:31:24 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*mem;

	tot_size = size * count;
	mem = (void *)malloc(tot_size);
	if (!mem)
		return (NULL);
	ft_memset (mem, 0, tot_size);
	return (mem);
}
