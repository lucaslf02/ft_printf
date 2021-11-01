/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 10:48:47 by llemes-f          #+#    #+#             */
/*   Updated: 2021/10/31 21:07:25 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t print_p(unsigned long pNbr);

size_t	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;
	char	*aux_format;

	aux_format = ft_strdup(format);
	len = 0;
	i = 0;
	va_start(args, format);
	while (aux_format[i])
	{
		if (aux_format[i] == '%')
			len += ft_format(aux_format[++i], args);
		else
			len += ft_putchar(aux_format[i]);
		i++;
	}	
	free(aux_format);
	va_end(args);
	return (len);
}

size_t	ft_format(char conversion, va_list args)
{
	int	len;

	len = 0;
	if (conversion == '%')
		len = ft_putchar('%');
	else if (conversion == 'c')
		len = ft_putchar((va_arg(args, int)));
	else if (conversion == 's')
		len = ft_putstr((va_arg(args, char *)));
	else if (conversion == 'p')
		len = print_p((va_arg(args, unsigned long)));
	else if (conversion == 'd' || conversion == 'i')
		len = ft_putstr(ft_itoa((va_arg(args, int))));
	else if (conversion == 'u')
		len = ft_putnbr((va_arg(args, unsigned)));
	else if (conversion == 'x')
		len = ft_putnbr_base((va_arg(args, unsigned long)), HEX_BASE_LOWER);
	else if (conversion == 'X')
		len = ft_putnbr_base((va_arg(args, unsigned long)), HEX_BASE_UPPER);
	return (len);
}

size_t print_p(unsigned long pNbr)
{
	size_t len;
	
	len = 0;
	if (pNbr == 0)
	{
		len = ft_putstr("0x");
		len += ft_putstr("0");
		return (len);
	}	
	len = ft_putstr("0x");
	len += ft_putnbr_base(pNbr, HEX_BASE_LOWER);
	return (len);
}
