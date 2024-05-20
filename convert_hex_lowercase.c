/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hex_lowercase.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:39:55 by hhedjam           #+#    #+#             */
/*   Updated: 2024/01/12 20:52:12 by hhedjam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int	convert_hex_lowercase(va_list args)
{
	unsigned int	nbr;

	nbr = va_arg(args, unsigned long);
	ft_putnbr_base_unsigned(nbr, "0123456789abcdef");
	return (ft_nb_base_len(nbr, 16));
}
