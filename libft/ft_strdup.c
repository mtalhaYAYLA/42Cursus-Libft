/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:55:07 by myayla            #+#    #+#             */
/*   Updated: 2022/10/13 16:08:01 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*t;
	size_t	i;
	size_t	u;

	u = ft_strlen(s1);
	t = (char *)malloc(sizeof(char) * (u + 1));
	if (!t)
		return (NULL);
	i = 0;
	while (*s1)
	{
		t[i] = *s1;
		i++;
		s1++;
	}
	t[i] = '\0';
	return (t);
}
