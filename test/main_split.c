#include <stdio.h>
#include <string.h>
int ft_split(char const *s, char c);

int main (void)
{
    /* char **subcadenas = ft_split("hola,mundo,como,estas", ',');
    int i = 0;
    while (subcadenas[i] != NULL) {
        printf("Subcadena %d: %s\n", i, subcadenas[i]);
        i++;
    } */
    int count = ft_split("hola,mundo,como,estas", ',');
printf("%d", count);
    return 0;
}
