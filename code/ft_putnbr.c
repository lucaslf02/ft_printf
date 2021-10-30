/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 00:02:31 by lucas             #+#    #+#             */
/*   Updated: 2021/10/30 14:56:34 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_divide_p(unsigned int *nbr)
{
	*nbr /= 10;
	return (*nbr);
}

size_t	ft_putnbr(unsigned int nb)
{
	int				multiple;
	int				number;
	int				len;
	unsigned int	aux;
	unsigned int	aux_nb;

	aux = nb;
	multiple = 1;
	aux_nb = aux;
	len = 0;
	while (ft_divide_p(&aux_nb) > 0)
		multiple *= 10;
	while (multiple)
	{
		number = ((aux / multiple) + 48);
		len += ft_putchar(number);
		aux %= multiple;
		multiple /= 10;
	}
	return (len);
}
