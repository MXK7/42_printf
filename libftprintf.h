/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 05:49:13 by mpoussie          #+#    #+#             */
/*   Updated: 2023/04/22 16:14:41 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_format(va_list args, const char format);

int		ft_printpercent(void);
int		ft_printchar(int str);
int		ft_printstr(char *str);
int		ft_printnbr(int *nbr);
int		ft_printptr(unsigned long long ptr);

void	ft_putstr(char *str);
void	ft_put_ptr(uintptr_t num);
char	*ft_itoa(int n);
char	*ft_uitoa(int n);
int		ft_ptr_len(uintptr_t num);
int		ft_num_len(unsigned int num);

#endif
