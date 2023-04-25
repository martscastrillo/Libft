#include <ctype.h>
#include <stdio.h>
int ft_isalnum(int c);
int main (void)
{
	 int c = 8;
  printf("%d\n", isalnum(c));
 
  printf("%d\n", ft_isalnum(c));
	return(0);
}
