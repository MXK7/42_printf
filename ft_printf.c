/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:04:16 by mpoussie          #+#    #+#             */
/*   Updated: 2023/04/21 17:39:46 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_format(va_list args, const char format)
{
	int	print_size;

	print_size = 0;
	if (format == 'c')
		print_size += ft_printchar(va_arg(args, int));
	else if (format == 's')
		print_size += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		return (0);
	// print_size += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_size += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		return (0);
	// print_size += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		// print_size += ft_print_hex(va_arg(args, unsigned int), format);
		return (0);
	else if (format == '%')
		print_size += ft_printpercent();
	return (print_size);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		print_size;

	i = 0;
	print_size = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_size += ft_format(args, str[i + 1]);
			i++;
		}
		else
		{
			print_size += write(1, &str[i], 1);
		}
		i++;
	}
	va_end(args);
	return (print_size);
}
