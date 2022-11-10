/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 04:01:24 by jo                #+#    #+#             */
/*   Updated: 2022/11/10 19:14:22 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//INCLUDE-----------------------------------------------------------------------
# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

//Prototype de fonction---------------------------------------------------------
int	ft_printf(const char *str, ...);

int	checkstr(va_list largs, char c);

int	ft_print_char(int c);
int	ft_print_str(char *str);

int	ft_putnbr_b10(int nb);
int	ft_putnbr_ub10(unsigned int nb);

int	ft_putnbr_b16(unsigned long long nb, char format);

int	ft_print_pourcent(void);


#endif