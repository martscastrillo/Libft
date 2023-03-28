#include <ctype.h>
#include <stdio.h>
int ft_isalpha(int c);
int main (void)
{
	 int c = 51;
  printf("%d\n", isalpha(c));
 
  printf("%d\n", ft_isalpha(c));
	return(0);
}
