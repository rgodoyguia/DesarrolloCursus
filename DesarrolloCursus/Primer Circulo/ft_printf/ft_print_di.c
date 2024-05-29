/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:46:09 by marvin            #+#    #+#             */
/*   Updated: 2024/02/26 12:46:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int ft_print_di(int arg)
{
    int print_count;

    print_count = 0;
    if (arg == -2147483648)
    {
        ft_print_di(-2);
        ft_print_di(147483648);
    }
    else if (arg < 0)
    {
        write(1, "-", 1);
        arg = -arg;
    }
    else if (arg >= 10)
    {
        ft_print_di(arg / 10);
        ft_print_di(arg % 10);
    }
    else if(arg < 10)
    {
        arg += '0';
        write(1, &arg, 1);
        print_count++;
    }
    return (print_count);
}