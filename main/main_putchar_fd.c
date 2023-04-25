#include<stdio.h>
#include <string.h>
#include <stdlib.h>

void ft_putchar_fd(char c, int fd);



int	main(void)
{
	char	letter;

	letter = 'l';
	ft_putchar_fd(letter, 1);
	return (0);
}
