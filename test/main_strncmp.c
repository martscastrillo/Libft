/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:51:35 by martcast          #+#    #+#             */
/*   Updated: 2023/03/09 16:44:15 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

 int ft_strncmp(char *s1, char *s2, unsigned int n);
 
 int main (void)
 {
    unsigned int z;
    z = 7;
   char s1 [] = "Hola mvd";
    char s2 [] = "Hola mufdndo";
    ft_strncmp(s1, s2, z);
    printf("%d \n", ft_strncmp(s1, s2, z));
    printf("%d \n", strncmp(s1, s2, z));

 }

 /*   compara carácter por carácter ,
  si las cadenas son iguales retornara un valor 0,
  si la primera cadena es mayor retornara un valor positiv
  y si es menor retornara un valor negativo 
  la diferencia entre los caracteres*/
