/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcholakk <fcholakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 11:20:43 by fcholakk          #+#    #+#             */
/*   Updated: 2026/11/17 18:59:38 by fcholakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_handle_format(char specifier, va_list *args);
int	ft_print_char(char c);
int	ft_print_string(char *s);
int	ft_print_unsigned(unsigned int n);
int	ft_print_signed(int n);
int ft_print_double(double n);
int	ft_print_hex(unsigned long n, int uppercase);
int	ft_print_pointer(void *ptr);

#endif
