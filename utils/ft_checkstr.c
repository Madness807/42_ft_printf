/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jo <jo@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:13:26 by jo                #+#    #+#             */
/*   Updated: 2022/11/09 12:44:39 by jo               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int checkstr(va_list largs, char c)
{
	int count;
	
	if(c == 'c')
		count = ft_printchar(va_arg(largs, int));

	if(c == 's')
		count = ft_printstr(va_arg(largs, char*));

	if(c == 'd' || c == 'i')
		return (0);
		//count = ft_printint(va_arg(largs, int));*/

	//if(c == 'x')

	//if(c == 'X')

	//if(c == 'p')
		
	//if(c == '%')

	return (count);
}
