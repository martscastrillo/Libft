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
void *ft_memcpy(void * dst, const void * src, size_t n); 

int main (void)
{
  const char src[50] = "http://www.tutorialspoint.com";
   char dest[50] = "Heloooo!!";
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, 7);
   printf("After memcpy dest = %s\n", dest);
   
  

 const char src2[50] = "http://www.tutorialspoint.com";
   char dest2[50] = "Heloooo!!";
   printf("Before memcpy dest = %s\n", dest2);
   ft_memcpy(dest2, src2, 7);
   printf("After memcpy dest = %s\n", dest2); 
   
 return(0);

}