/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 19:34:36 by martcast          #+#    #+#             */
/*   Updated: 2023/03/27 19:34:38 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN
 * 
 * VALOR DEVUELTO
 * 
 */
#include "libft.h"

char *ft_itoa(int n)
{
    int len = 0;
    int temp = n;
    int i;
    char *str;


    while(temp != 0)
    {
        len++;
        temp = temp / 10;
    }
    if (n < 0)
    {
        len++;
    }
       str = (char *)malloc((len + 1) * sizeof(char));
      if (str == NULL)
    {
        return NULL;
    }
 
    str[len] = '\0';
    if (n < 0)
    {
        str[0] = '-';
        n = -n;
    }
    i = len-1;
    while(i>=0) 
    {
     /*    if(str[i] != '-')
        { */
        str[i] = (n % 10) + '0';
            n /= 10;
   /*      }   */
        i--;
    }
   
    return str;
}