#include<stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1);

int	main(void)
{
    
	char *str;
	const char *orig = "Hello, world!";
	str = strdup(orig);
	printf("%s \n", str);
	free(str);

    char *str2;
	const char *orig2 = "Hello, world!";
	str2 = ft_strdup(orig2);
	printf("%s \n", str2);
	free(str2); 
	return (0);
	
}
