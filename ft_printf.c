/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:58:15 by hhedjam           #+#    #+#             */
/*   Updated: 2024/01/15 19:48:28 by hhedjam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static int	ft_parse(char cas, va_list args)
{
	int	res;

	res = -1;
	if (cas == 'c')
		res = convert_char(args);
	else if (cas == 'd' || cas == 'i')
		res = convert_decimal(args);
	else if (cas == 's')
		res = convert_string(args);
	else if (cas == 'p')
		res = convert_pointer(args);
	else if (cas == 'u')
		res = convert_unsigned(args);
	else if (cas == 'x')
		res = convert_hex_lowercase(args);
	else if (cas == 'X')
		res = convert_hex_uppercase(args);
	else if (cas == '%')
		res = convert_percent(args);
	else
		res = -1;
	return (res);
}

int	ft_printf(const char *str, ...)
{
	int		res;
	int		i;
	va_list	args;

	res = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			res = res + ft_parse(str[i + 1], args);
			i ++;
		}
		else
		{
			write (1, &str[i], 1);
			res = res + 1;
		}
		i++;
	}
	va_end(args);
	return (res);
}
