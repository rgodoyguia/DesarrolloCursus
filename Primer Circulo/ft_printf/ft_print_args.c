/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:31:10 by marvin            #+#    #+#             */
/*   Updated: 2024/02/12 16:31:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int ft_print_args(char const *str, va_list args)
{
    int print_count;
    int zero_flag;
    int minus_flag;
    int hashtag_flag;
    int plus_flag;

    print_count = 0;
    minus_flag = 0;
    zero_flag = 0;
    hashtag_flag = 0;
    plus_flag = 0;

    str++;
    ft_flags_bonus(str, &zero_flag, &minus_flag, &hashtag_flag, &plus_flag);
    if (str == 'c')
       print_count += ft_print_c();
    else if(str == 's')
        print_count += ft_print_s();
    else if (str == 'p')
        print_count += ft_print_p();
    else if (str == 'd' || str == 'i')
        print_count += ft_print_di();
    else if (str == 'u')
        print_count += ft_print_u();
    else if (str == 'x')
        print_count += ft_print_xlow();
    else if (str == 'X')
        print_count += ft_print_xup();
    else if (str == '%')
        print_count += ft_print_percent();
    str++;
    return (print_count);
}