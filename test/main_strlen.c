 #include <string.h>
#include <stdio.h>
 size_t ft_strlen(const char *s);
int main (void)
{
	char s [] = "Hola";
  printf("%lu\n", strlen(s));
 
  printf("%lu\n", ft_strlen(s));
	return(0);
}
