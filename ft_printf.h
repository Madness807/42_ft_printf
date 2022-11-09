/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jo <jo@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 04:01:24 by jo                #+#    #+#             */
/*   Updated: 2022/11/09 15:41:39 by jo               ###   ########.fr       */
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
int	ft_print_int(int a);
int	ft_print_hex(unsigned long long a);
int ft_print_pourcent(void);
int ft_print_uint(unsigned int);

#endif