#include <stdio.h>
#include <string.h>


int	ft_countwords(char const *s, char c);
char *ft_printarray(char const *s, char c);
int main(void)
{
	printf("%d\n", ft_countwords("--que-666 -tal", '-'));
    	printf("%d\n", ft_countwords("9--que-666 -tal", '-'));
        	printf("%s\n", ft_printarray("9--que-666 -tal", '-'));
/* 	printf("%s\n", **ft_split("---hola--que--tal", '-')); */
}
