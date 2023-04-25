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
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int main(void)
{
     int testlen = 7;
     const char *largestring = "Foo Bar Baz";
     const char *smallstring = "Bar";
     
     printf("%s", strnstr(largestring, smallstring, testlen));
     printf("\n");
     const char *largestring2 = "Foo Bar Baz";
     const char *smallstring2 = "Bar";
     printf("%s", ft_strnstr(largestring2, smallstring2, testlen));
     return (0);
}