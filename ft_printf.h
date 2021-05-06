/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:41:11 by llemes-f          #+#    #+#             */
/*   Updated: 2021/04/18 15:21:16 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

#ifdef FT_PRINTF_H
# define FT_PRINTF_H

# ifndef SPEC
#  define SPEC "cspdiuxX%"
# endif

# ifndef FLAGS
#  define FLAGS "-0.*"
# endif


typedef  struct print_flags
{
	char spec;
	bool dot;
	bool zero;
	bool dash;
	int len;	
	int width;
	int precision;

} print_flags_t;

int	ft_printf(const char *format, ...);

#endif