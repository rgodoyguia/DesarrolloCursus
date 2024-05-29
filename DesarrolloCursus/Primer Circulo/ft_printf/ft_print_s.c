/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:44:40 by marvin            #+#    #+#             */
/*   Updated: 2024/02/22 10:44:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int ft_print_s(va_list args)
{
    char *str;
    int print_count;

    print_count = 0;
    *str = va_arg(args, char *);
    while(str)
    {
        write(1, &str, 1);
        print_count++;
        str++;
    }
    return (print_count);
}