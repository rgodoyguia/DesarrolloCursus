/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:54:57 by marvin            #+#    #+#             */
/*   Updated: 2024/03/19 10:54:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_print_arg(va_list args, const char *str)
{
    int length;

	length = 0;
    if(str == 'c')
		length += ft_print_c(va_arg(args, int));
	else if (str == 's')
		length += ft_print_s(va_arg(args, char *));
	else if (str == 'p')
		length += ft_print_p(va_arg(args, unsigned long long));
	else if (str == 'd' || str == 'i')
		length += ft_print_di(va_arg(args, int));
	else if (str == 'u')
		length += ft_print_u(va_arg(args, unsigned int));
	else if (str == 'x')
		length += ft_print_x(va_arg(args, unsigned int));
	else if (str == 'X')
		length += ft_print_X(va_arg(args, unsigned int));
	else if (str == '%')
		length += print_percent();
	return (length);
}