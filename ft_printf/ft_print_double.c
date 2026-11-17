/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_double.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcholakk <fcholakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 18:57:15 by fcholakk          #+#    #+#             */
/*   Updated: 2026/11/17 19:04:43 by fcholakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_double(double n)
{
	long	whole;
	long	decimal;
	int		count;

	count = 0;
	if (n < 0)
	{
		count += ft_print_char('-');
		n = -n;
	}
	whole = (long)n;
	decimal = (long)((n - whole) * 100 + 0.5);
	if (decimal == 100)
	{
		whole++;
		decimal = 0;
	}
	count += ft_print_signed(whole);
	count += ft_print_char('.');
	count += ft_print_char('0' + decimal / 10);
	count += ft_print_char('0' + decimal % 10);
	return (count);
}