/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_xup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:51:57 by marvin            #+#    #+#             */
/*   Updated: 2024/02/26 12:51:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int ft_print_x(unsigned int arg, char base[17])
{
    int print_count;
    int n[24];
    int i;

    i = 0;
    print_count = 0;
    while(arg > 0)
    {
        n[i] = arg % 16;
        arg /= 16;
        i++;
    }
    while(0 < i)
    {
        write(1 ,&base[n[i]], 1);
        i--;
        print_count++;
    }
    return (print_count);
}