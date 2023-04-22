/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_function.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 06:09:42 by mpoussie          #+#    #+#             */
/*   Updated: 2023/04/22 16:11:14 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_printchar(int str)
{
	write(1, &str, 1);
	return (1);
}

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_printnbr(int *nbr)
{
	int		len;
	char	*itoa;

	itoa = ft_itoa(nbr);
	len = ft_printstr(itoa);
	free(itoa);
	return (len);
}

int	ft_printptr(unsigned long long ptr)
{
	int	print_len;

	print_len += write(1, "0x", 2);
	if (ptr == 0)
		print_len += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		print_len += ft_ptr_len(ptr);
	}
	return (print_len);
}

int	ft_print_unsigned(unsigned int nbr)
{
	int		print_len;
	char	num;

	print_len = 0;
	if (nbr == 0)
		print_len += write(1, "0", 1);
	else
	{
		num = ft_uitoa(nbr);
		print_len += ft_printstr(nbr);
		free(num);
	}
	return (print_len);
}
