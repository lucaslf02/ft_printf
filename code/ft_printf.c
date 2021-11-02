/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 10:48:47 by llemes-f          #+#    #+#             */
/*   Updated: 2021/11/02 17:12:32 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_p(unsigned long pNbr);
size_t	print_d_i(int nbr);
size_t	print_h(unsigned long pNbr, char *base);

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
		len = print_d_i((va_arg(args, int)));		
	else if (conversion == 'u')
		len = ft_putnbr((va_arg(args, unsigned)));
	else if (conversion == 'x')
		len = print_h((va_arg(args, unsigned long)), HEX_BASE_LOWER);
	else if (conversion == 'X')
		len = print_h((va_arg(args, unsigned long)), HEX_BASE_UPPER);
	return (len);
}

size_t	print_d_i(int nbr)
{
	size_t	len;
	char	*s;

	len = 0;
	s = ft_itoa(nbr);
	len = ft_putstr(s);
	free(s);
	return (len);
}

size_t	print_p(unsigned long pNbr)
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

size_t	print_h(unsigned long pNbr, char *base)
{
	size_t len;
	
	len = 0;
	if (pNbr == 0)
	{
		len += ft_putstr("0");
		return (len);
	}	
	len += ft_putnbr_base(pNbr, base);
	return (len);
}
