#include <ctype.h>
#include <stdio.h>
int ft_isprint(int c);
int main (void)
{
	 int c = 56;
  printf("%d\n", isprint(c));
 
  printf("%d\n", ft_isprint(c));
	return(0);
}
