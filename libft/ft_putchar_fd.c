/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:46:34 by myayla            #+#    #+#             */
/*   Updated: 2022/10/17 16:52:36 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

//fd ile yazdırıyoruz write 1 ile yazmamızın nedeni fd de 1 
//writeO anlamına geliyor 0 koyarsak sadece readO 2 hata kodu yazdırıyor