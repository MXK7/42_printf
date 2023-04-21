/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 05:49:13 by mpoussie          #+#    #+#             */
/*   Updated: 2023/04/21 09:00:55 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_format(va_list args, const char format);

int		ft_printpercent(void);
int		ft_printchar(int str);
int		ft_printstr(char *str);
int		ft_printnbr(int *nbr);

void	ft_putstr(char *str);
char	*ft_itoa(int n);

#endif
