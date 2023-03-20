/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 22:34:14 by martcast          #+#    #+#             */
/*   Updated: 2023/03/09 16:06:54 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
char	*ft_substr(char const *s, unsigned int start, size_t len);
int main () {
   
  
   const char *str = "HOLA QUE TAL";
   

   printf("%s\n", ft_substr(str, 6,4));
   
   
   return(0);
}