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

 int ft_toupper(int c);
 
 int main (void)
 {
    int c = 112;
	printf("%c\n", c);
	ft_toupper(c);
    printf("%c \n", ft_toupper(c));
 	return (0);
 }

