/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:51:35 by martcast          #+#    #+#             */
/*   Updated: 2023/03/09 17:03:13 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

 int ft_tolower(int c);
 
 int main (void)
 {
    int c = 65;
	printf("%c\n", c);
	ft_tolower(c);
    printf("%c \n", ft_tolower(c));
	int b = 65;
	printf("%c\n", b);
/* 	tolower(b);
    printf("%c \n", tolower(b)); */
 	return (0);
 }

