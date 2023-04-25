#include<stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_striteri(char *s, void (*f)(unsigned int, char*));

void ft_toupper5(unsigned int s, char *c)
{
	if (s >= 0)
	{
		if (c[0] >= 'a' && c[0] <= 'z')
			c[0] = c[0] - 32;
	}
}
int main(void)
{
	char	s[] = "castania pilonga";
	char	x;
	x = 0;
	ft_striteri(s, ft_toupper5);
	printf("%s", s);
	return (0);
}