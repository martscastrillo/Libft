#include <ctype.h>
#include <stdio.h>
int ft_isascii(int c);
int main (void)
{
	 int c = 51;
  printf("%d\n", isascii(c));
 
  printf("%d\n", ft_isascii(c));
	return(0);
}
