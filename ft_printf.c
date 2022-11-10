/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 03:24:00 by jo                #+#    #+#             */
/*   Updated: 2022/11/10 16:46:22 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	largs;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(largs, str);
	while (str[i])
	{	
		if (str[i] == '%')
		{
			count = count + checkstr(largs, str[i + 1]);
			i++;
		}	
		else
			count = count + ft_print_char(str[i]);
		i++;
	}
	va_end(largs);
	return (count);
}
