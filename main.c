/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jo <jo@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:32:12 by jo                #+#    #+#             */
/*   Updated: 2022/11/09 15:47:12 by jo               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
    int chiffre = 4;
    int nombre = 27;
    unsigned int unbr = 543;
    char c = 'a';
    char *str = "salut ca va ?";
	void *vptr = malloc(3 * sizeof(char));
//----------------------------------------------------------------------------------------------char
    printf("\n");
	printf("return %d✅\n", printf("VF Affiche un seul caractère: %c // ", c));
	printf("return %d✅\n", ft_printf("42 Affiche un seul caractère: %c // ", c));
	printf("\n");
//--------------------------------------------------------------------------------------------string
	printf("return %d✅\n",printf("VF Affiche une chaîne de caractères: %s // ", str));
	printf("return %d✅\n",ft_printf("42 Affiche une chaîne de caractères: %s // ", str));
	printf("\n");
//---------------------------------------------------------------------------------------------*void
    printf("return %d✅\n",printf("VF Pointeur sur void: %p // ", &vptr));
	printf("return %d🚧\n",ft_printf("42 Pointeur sur void: %p // ", &vptr));
	printf("\n");
//---------------------------------------------------------------------------------------------intb10
	printf("return %d✅\n",printf("VF Affiche un nombre décimal(base 10): %d // ", nombre));
    printf("return %d🚧\n",ft_printf("42 Affiche un nombre décimal(base 10): %d // ", nombre));  
	printf("\n");
//--------------------------------------------------------------------------------------------------
    printf("return %d✅\n",printf("VF Affiche un entier en base 10: %i // ", nombre));
	printf("return %d🚧\n",ft_printf("42 Affiche un entier en base 10: %i // ", nombre));
	printf("\n");
//--------------------------------------------------------------------------------------------------
    printf("return %d✅\n",printf("VF Affiche un nombre décimal non signé (base 10): %u // ", unbr));
	printf("return %d🚧\n",ft_printf("42 Affiche un nombre décimal non signé (base 10): %u // ", unbr));
	printf("\n");
//--------------------------------------------------------------------------------------------------
    printf("return %d✅\n",printf("VF Affiche un nombre en hexadécimal(base 16)minuscules: %x // ", nombre));
	printf("return %d🚧\n",ft_printf("42 Affiche un nombre en hexadécimal(base 16)minuscules: %x // ", nombre));
	printf("\n");
//--------------------------------------------------------------------------------------------------
    printf("return %d✅\n",printf("VF Affiche un nombre en hexadécimal(base 16)majuscules: %X // ", nombre));
	printf("return %d🚧\n",ft_printf("42 Affiche un nombre en hexadécimal(base 16)majuscules: %X // ", nombre));
	printf("\n");
//--------------------------------------------------------------------------------------------------
	printf("return %d✅\n",printf("VF Affiche un pourcentage %% // "));
	printf("return %d✅\n",ft_printf("42 Affiche un pourcentage %% // ", c)); 
//--------------------------------------------------------------------------------------------------
}

