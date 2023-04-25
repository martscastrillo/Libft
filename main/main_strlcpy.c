#include <ctype.h>
#include <stdio.h>
#include <string.h> 
size_t ft_strlcpy(char *  dst, const char *  src, size_t dstsize);
int main (void)
{

		char dest[] = "gffdhxr";
    char src[] = "hgdxg<tdhzyjrrya";
    size_t len = 7;
	
printf("este es el string dest === '%s'\n", dest);
printf("este es el string src === '%s'\n", src);
ft_strlcpy( dest,  src, len);
int result = ft_strlcpy( dest,  src, len);
printf("este es el string dest ft_strlcpy === '%d'\n", result);

strlcpy( dest,  src, len);
int res = strlcpy( dest,  src, len);
printf("este es el string dest strlcpy === '%d'\n", res);
printf("este es el string dest strlcpy === '%s'\n", dest);
 return (0);
}

