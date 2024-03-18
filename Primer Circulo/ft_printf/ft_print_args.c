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

    print_count = 0;
    print_count += ft_args_selector(str, args);
    str++;
    return (print_count);
}