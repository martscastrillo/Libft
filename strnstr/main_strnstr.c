/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martcast <martcast@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:22:35 by martcast          #+#    #+#             */
/*   Updated: 2023/03/13 21:22:38 by martcast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 #include <string.h>
#include <stdio.h>
int main(void)
{
     const char *largestring = "Foo Bar Baz";
     const char *smallstring = "Bar";
     printf("%s", strnstr(largestring, smallstring, 8));
     return (0);
}