/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jo <jo@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 04:01:24 by jo                #+#    #+#             */
/*   Updated: 2022/11/09 12:50:22 by jo               ###   ########.fr       */
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
int	ft_printchar(int c);
int ft_printstr(char *str);
int ft_printint(int a);

#endif