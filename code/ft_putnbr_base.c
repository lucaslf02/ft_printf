/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 21:37:54 by llemes-f          #+#    #+#             */
/*   Updated: 2021/11/02 17:16:28 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr_base(unsigned long long nbr, char *base)
{
	unsigned long long	aux_nbr;
	unsigned long long	nbr_final[100];
	int					i;
	int					len;
	int					size_base;

	i = 0;
	len = 0;
	size_base = 0;
	aux_nbr = nbr;
	while (base[size_base])
		size_base++;
	while (aux_nbr)
	{
		nbr_final[i] = aux_nbr % size_base;
		aux_nbr = aux_nbr / size_base;
		i++;
	}
	while (--i >= 0)
		len += ft_putchar(base[nbr_final[i]]);
	return (len);
}
