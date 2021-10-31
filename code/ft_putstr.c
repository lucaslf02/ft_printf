/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 21:26:03 by llemes-f          #+#    #+#             */
/*   Updated: 2021/10/31 20:51:02 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putstr(char *s)
{
	int	len;

	len = 0;
	if (s == NULL || !*s)
		s = "(null)";
	while (*s)
		len += ft_putchar(*s++);
	return (len);
}
