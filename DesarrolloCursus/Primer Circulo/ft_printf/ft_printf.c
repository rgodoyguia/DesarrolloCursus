/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:29:14 by marvin            #+#    #+#             */
/*   Updated: 2024/02/10 12:29:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int ft_printf(char const *str, ...)
{
    int print_count;
    va_list args;

    va_start(args, str);
    print_count = 0;
    while(str)
    {
        if (str == '%')
        {
            str++;
            print_count += ft_print_args(str, args);
        }
        else
            write(1 ,&str, 1);
        str++;
        print_count++;
    }
    va_end(args);
    return (print_count);
}