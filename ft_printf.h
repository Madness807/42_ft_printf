/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jo <jo@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 04:01:24 by jo                #+#    #+#             */
/*   Updated: 2022/11/09 13:01:32 by jo               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//INCLUDE-----------------------------------------------------------------------
# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

//Prototype de fonction---------------------------------------------------------
int ft_printf(const char *str, ...);
int checkstr(va_list largs, char c);
int	ft_print_char(int c);
int ft_print_str(char *str);
int ft_print_int(int a);
int ft_print_addr(unsigned long long a);

#endif