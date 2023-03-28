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
#include  <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);

int main()
{
    char* s = " ---+--+1234ab567";
       int prueba =ft_atoi(s);
  printf("%d\n", prueba); 
	printf("%d\n", atoi(s));


    char* t="122a33";
	int n=ft_atoi(t);
	printf("%d\n",n);
	printf("%d\n", atoi(t));	
}
