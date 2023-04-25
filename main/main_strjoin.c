#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *ft_strjoin(char const *s1, char const *s2);
int main () {
   
  char const *str1= "HOLA QUE TAL";
  char const *str2= "COMO ESTAS";
  

    printf("%s\n", ft_strjoin(str1, str2));
 


   return(0);
}