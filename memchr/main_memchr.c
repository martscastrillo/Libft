/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 22:45:31 by martcast          #+#    #+#             */
/*   Updated: 2023/03/13 22:45:38 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h> 
void * ft_memchr(const void *s, int c, size_t n);
	
int main (void)
{
      char cadena[] = "Erase una vez...";
   char *puntero; 

   puntero = (char *)memchr( cadena, 'a', 5 );
   printf( "%s\n", cadena); 
   printf( "%s\n", puntero ); 
 
   char cadena2[] = "Erase una vez...";
   char *puntero2; 

   puntero2 = (char *)ft_memchr( cadena2, 'a', 5 );
   printf( "%s\n", cadena2); 
   printf( "%s\n", puntero2 );
      
   return 0;
}