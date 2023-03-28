#include <stdio.h>
#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char ft_toupper4(unsigned int s, char c)
{
	if (s >= 0)
	{
		if (c >= 'a' && c <= 'z')
			c = c - 32;
	}
	return (c);
}
int main(void)
{
	char	s[] = "castania pilonga";
	char	*r;
	char	x;
	x = 0;
	r = ft_strmapi(s, ft_toupper4);
	printf("%s", r);
	return (0);
}
