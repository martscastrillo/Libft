#include <ctype.h>
#include <stdio.h>
#include <string.h> 
size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
int main (void)
{
char src[] = "hoola";
		char dest[] = "gfhxr";
    size_t len = 6;
	
printf("este es el string src === '%s'\n", src);

ft_strlcpy( dest,  src, len);
int result = ft_strlcpy( dest,  src, len);
printf("este es el string dest === '%d'\n", result);

strlcpy( dest,  src, len);
int res = strlcpy( dest,  src, len);
printf("este es el string dest === '%d'\n", res);
 return (0);
}

