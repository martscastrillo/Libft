#include<stdio.h>
#include <string.h>
#include <stdlib.h>


void ft_putstr_fd(char *s, int fd);


int	main(void)
{
	char str1 [] = "Hola don pepito\n";
	ft_putstr(str1, 1);
	char str2[] = "Hola don jose\n";
	ft_putstr(str2, 1);
		char str3[] = "paso usted por su casa\n";
	ft_putstr(str3, 1);
	return (0);
}