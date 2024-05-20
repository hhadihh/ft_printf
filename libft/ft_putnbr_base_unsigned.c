/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_unsigned.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:47:42 by hhedjam           #+#    #+#             */
/*   Updated: 2024/01/13 19:17:54 by hhedjam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_base_unsigned(unsigned int nb, char *base)
{
	unsigned long long	base_size;

	base_size = ft_strlen(base);
	if (nb >= base_size)
		ft_putnbr_base_unsigned(nb / base_size, base);
	ft_putchar(base[nb % base_size]);
}
