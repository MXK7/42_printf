/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 05:49:13 by mpoussie          #+#    #+#             */
/*   Updated: 2023/04/24 09:20:54 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define CHAR_BIT 8
# define SCHAR_MIN -128
# define SCHAR_MAX +127
# define UCHAR_MAX 255
# define CHAR_MIN -128
# define CHAR_MAX +127
# define MB_LEN_MAX 16
# define SHRT_MIN -32768
# define SHRT_MAX +32767
# define USHRT_MAX 65535
# define INT_MAX +2147483647
# define INT_MIN -2147483648
# define UINT_MAX 4294967295
# define LONG_MIN -9223372036854775808
# define LONG_MAX +9223372036854775807
# define ULONG_MAX 18446744073709551615

# include "include/libft.h"
# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_format(va_list args, const char format);

int		ft_print_percent(void);
int		ft_print_char(int str);
int		ft_print_str(char *str);
int		ft_print_nbr(int nbr);
int		ft_print_ptr(unsigned long long ptr);
int		ft_print_hex(unsigned int nbr, const char format);
int		ft_print_unsigned(unsigned int nbr);

void	ft_put_str(char *str);
void	ft_put_ptr(uintptr_t nbr);
void	ft_put_hex(unsigned int nbr, const char format);
char	*ft_unsigned_itoa(unsigned int nbr);
int		ft_printf_len(uintptr_t nbr);
int		ft_num_len(unsigned int nbr);

#endif
