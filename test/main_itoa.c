#include <stdio.h>
char    *ft_itoa(int n);

int main (void)
{
     int num = 0;
    char *str = ft_itoa(num);

    printf("El número %d convertido a una cadena es: %s\n", num, str);
  int num2 = 156;
    char *str2 = ft_itoa(num2);

    printf("El número %d convertido a una cadena es: %s\n", num2, str2);
   
    return 0;
}