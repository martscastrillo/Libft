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
   #include <strings.h>
void *ft_bzero(void *s, size_t n);
int main () {
 char str[] = "This is string.h library function";


bzero(str, 3);
printf("%s\n", str);
/*  char str2[] = "This is string.h library function";
ft_bzero(str2, 7);
printf("%s\n", str2); */
   
   return(0);
}