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
void *ft_memset(void *b, int c, size_t len);
int main () {
 char str[] = "This is string.h library function";


memset(str,'$',7);
printf("%s\n", str);
 char str2[] = "This is string.h library function";
ft_memset(str2,'$',7);
printf("%s\n", str2);
   
   return(0);
}