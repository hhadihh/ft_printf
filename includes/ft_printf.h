/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:08:44 by hhedjam           #+#    #+#             */
/*   Updated: 2024/01/13 19:04:51 by hhedjam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdint.h>
# include "../libft/libft.h"

int		convert_char(va_list args);
int		convert_decimal(va_list args);
int		convert_hex_lowercase(va_list args);
int		convert_hex_uppercase(va_list args);
int		convert_percent(va_list args);
int		convert_pointer(va_list args);
int		convert_string(va_list args);
int		convert_unsigned(va_list args);
int		ft_printf(const char *str, ...);

#endif
