/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:22:23 by myayla            #+#    #+#             */
/*   Updated: 2022/10/17 15:59:52 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int num);

char	*ft_itoa(int n)
{
	int		len;
	char	*itoa;
	long	nbr;

	nbr = n;
	len = ft_numlen(nbr);
	if (n < 0)
	{
		len++;
		nbr = -nbr;
	}
	itoa = (char *)malloc(sizeof(char) * len + 1);
	if (!itoa)
		return (NULL);
	itoa[len] = '\0';
	while (nbr > 0)
	{
		itoa[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (n < 0)
		itoa[0] = '-';
	if (n == 0)
		itoa[0] = '0';
	return (itoa);
}

static int	ft_numlen(int num)
{
	int	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num > 0 || num < 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}
// Fonksiyonun amacı alınan int değeri chara dönüştürmesi.
// 37'de çağırdığımız fonksiyon basamak sayısı buluyor
// 43'de basamak sayısının + 1'i (NULL için) kadar yer açıyor.
// 46'da sonuna NULL attık (tersten gittiğimiz için!)
// 47'de ki fonksiyon sondan başlayarak değeri char'a dönüştürüyor