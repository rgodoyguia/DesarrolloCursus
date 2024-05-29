/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_selector.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:44:55 by marvin            #+#    #+#             */
/*   Updated: 2024/02/21 13:44:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int ft_args_selector(const char *str, va_list args)
{
    int print_count;

    print_count = 0;
    if (str == 'c')
        print_count += ft_print_c(va_arg(args, char));
    else if (str == 's')
        print_count += ft_print_s(va_arg(args, char *));
    else if (str == 'p')
        print_count += ft_print_p(va_arg(args, int), "0123456789ABCDEF");
    else if (str == 'd' || str == 'i')
        print_count += ft_print_di(va_arg(args, int));
    else if (str == 'u')
        print_count += ft_print_u(va_arg(args, unsigned int));
    else if (str == 'x')
        print_count += ft_print_x(va_arg(args, int), "0123456789abcdef");
    else if (str == 'X')
        print_count += ft_print_x(va_arg(args, int), "012345789ABCDEF");
    else if (str == '%')
        print_count += ft_print_percent();
    return (print_count);
}