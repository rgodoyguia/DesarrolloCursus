/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:47:00 by marvin            #+#    #+#             */
/*   Updated: 2024/02/26 12:47:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int ft_print_u(unsigned int arg)
{
    int print_count;

    print_count = 0;
    if (arg >= 10)
    {
        ft_print_di(arg / 10);
        ft_print_di(arg % 10);
    }
    if(arg < 10)
    {
        arg += '0';
        write(1, &arg, 1);
        print_count++;
    }
    return (print_count);
}