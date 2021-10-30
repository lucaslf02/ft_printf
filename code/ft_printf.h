/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:41:11 by llemes-f          #+#    #+#             */
/*   Updated: 2021/10/30 14:47:04 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define HEX_BASE_LOWER "0123456789abcdef"
# define HEX_BASE_UPPER "0123456789ABCDEF"

/*libft functions*/
size_t	ft_putchar(char c);
size_t	ft_strlen(const char *s);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_strrchr(const char *s, int c);
size_t	ft_putnbr_base(long long nbr, char *base);
size_t	ft_putstr(char *s);
int		ft_isdigit(int c);
size_t	ft_putnbr(unsigned int nb);

/*printf functions*/
size_t	ft_printf(const char *format, ...);
size_t	ft_format(char conversion, va_list args);

#endif
