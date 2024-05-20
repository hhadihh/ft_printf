/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:19:23 by hhedjam           #+#    #+#             */
/*   Updated: 2024/01/12 20:52:29 by hhedjam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int	convert_unsigned(va_list args)
{
	unsigned long	nbr;

	nbr = va_arg(args, unsigned long);
	ft_putnbr_base_unsigned((unsigned long long)nbr, "0123456789");
	return (ft_nb_base_len(nbr, 10));
}
