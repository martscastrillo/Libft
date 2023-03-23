#include <stdio.h>
char *ft_strtrim(char const *s1, char const *set);

int main (void)
{
	const char s1[] = "HOLA QUE TAL";  
	const char set[] = "HLOA";  
	char *result;
	result = ft_strtrim(s1, set);
	printf("%s\n", result);
	return (0);
}
