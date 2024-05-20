/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hex_uppercase.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:14:23 by hhedjam           #+#    #+#             */
/*   Updated: 2024/01/12 20:52:15 by hhedjam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int	convert_hex_uppercase(va_list args)
{
	unsigned int	nbr;

	nbr = va_arg(args, unsigned long);
	ft_putnbr_base_unsigned(nbr, "0123456789ABCDEF");
	return (ft_nb_base_len(nbr, 16));
}
