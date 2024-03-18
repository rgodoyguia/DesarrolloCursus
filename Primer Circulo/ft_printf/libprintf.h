/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:07:37 by marvin            #+#    #+#             */
/*   Updated: 2024/02/10 13:07:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
#define LIBPRINTF_H

#include <stdarg.h>

int ft_printf(char const *str, ...);
int ft_print_x(unsigned int arg, char base[17]);
int ft_print_u(unsigned int arg, int flags[4]);
int ft_print_s(va_list args);
int ft_print_percent();
int ft_print_p(unsigned long long int arg, char base[17]);
int ft_print_di(int arg);
int ft_print_c(va_list args);
int ft_print_args(char const *str, va_list args);
int ft_args_selector(const char *str, va_list args);

#endif