/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 10:48:47 by llemes-f          #+#    #+#             */
/*   Updated: 2021/04/18 15:21:47 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	char aux_format;

	aux_format = format;
	va_start(args, format);
	while (aux_format != '\0')
	{
    if (aux_format == '%')
			ft_format(&aux_format);
		else
			putchar(aux_format);
		aux_format++;
	}	
	va_end(args);
	return (1);
}