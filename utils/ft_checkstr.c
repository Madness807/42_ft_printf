/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jo <jo@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:13:26 by jo                #+#    #+#             */
/*   Updated: 2022/11/09 13:12:18 by jo               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int checkstr(va_list largs, char c)
{
	int count;
	
	if(c == 'c')
		count = ft_print_char(va_arg(largs, int));

	if(c == 's')
		count = ft_print_str(va_arg(largs, char*));

	if(c == 'd' || c == 'i')
		return (0);
		//count = ft_printint(va_arg(largs, int));*/

	if(c == 'x')
		return (0);
		//count = ft_

	if(c == 'X')
		return (0);
		//count = ft_

	if(c == 'p')
		return (0);
		//count = ft_printaddr(largs, unsigned long long int);

	if(c == '%')
		return (0);
		//count = ft_

	return (count);
}
