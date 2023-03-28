#include <ctype.h>
#include <stdio.h>
int ft_isdigit(int c);
int main (void)
{
	 int c = 51;
  printf("%d\n", isdigit(c));
 
  printf("%d\n", ft_isdigit(c));
	return(0);
}
