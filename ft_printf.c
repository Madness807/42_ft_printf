/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 03:24:00 by jo                #+#    #+#             */
/*   Updated: 2022/11/01 18:25:40 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdarg.h>

int	ft_printchar(char c)
{	
	write(1, &c, 1);
	return (1);
}

int checkstr(va_list largs, char c)
{
	int count;
	
	if(c == 'c')
	count = ft_printchar(va_arg(largs, char));
/*	if(c == 's')
		ft_printstring(va_arg(largs, char *), c);
	
	if(c == 'd')
		ft_printint(va_arg(largs, int))
	if(c == 'i')

	if(c == 'x')

	if(c == 'X')

	if(c == 'p')
		ft_printpvoid(va_arg(largs, ))

	if(c == '%')
*/
	return (count);
}

int ft_printf(const char *str, ...)
{
	va_list	largs;
	int i;
	int count;

	i = 0;
	count = 0;
	va_start(largs, str);
	while (str[i])
	{	
		if (str[i] == '%')
		{
			checkstr(largs, str[i + 1]);
			
		}	
		else
			count = count + ft_printchar(str[i]);
		i++;
	}
	va_end(largs);
	return (count);
}

int main()
{
    int chiffre = 4;
    int nombre = 23;
    unsigned int unbr = 543;
    char c = 'a';
    char *str = "salut ca va ?";
//--------------------------------------------------------------------VRAI_PRINTF------------
    printf("Affiche un seul caractère:  %c\n", c);
    //printf("Affiche une chaîne de caractères:  %s\n", str);
    //printf("VF:  %p\n", c);   ??
    //printf("Affiche un nombre décimal (base 10):  %d\n", nombre);
    //printf("Affiche un entier en base 10:  %i\n", nombre);
    //printf("Affiche un nombre décimal non signé (base 10):  %u\n", unbr);
    //printf("Affiche un nombre en hexadécimal (base 16) avec des lettres minuscules.:  %x\n", c);
    //printf("Affiche un nombre en hexadécimal (base 16) avec des lettres majuscules.:  %X\n", c);
    //printf("Affiche un signe pourcentage %%\n", c);  ??


//--------------------------------------------------------------------42_PRINTF

    ft_printf("Affiche un seul caractère:  %c\n", c);
    //ft_printf("Affiche une chaîne de caractères:  %s\n", str);
    //ft_printf("VF:  %p\n", c);
    //ft_printf("Affiche un nombre décimal (base 10):  %d\n", nombre);
    //ft_printf("Affiche un entier en base 10:  %i\n", nombre);
    //ft_printf("Affiche un nombre décimal non signé (base 10):  %u\n", unbr);
    //ft_printf("Affiche un nombre en hexadécimal (base 16) avec des lettres minuscules.:  %x\n", c);
    //ft_printf("Affiche un nombre en hexadécimal (base 16) avec des lettres majuscules.:  %X\n", c);
    //ft_printf("Affiche un signe pourcentage %%\n", c);  
}
