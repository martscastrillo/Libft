#include <ctype.h>
#include <stdio.h>
#include <string.h> 
/* size_t	ft_strlcat(char * dst, const char * src, size_t dstsize); */
int main (void)
{

		char dest[] = "tdhzyjrrya";
    char src[] = "sarg";
    size_t len = 8;
	
/* printf("este es el string dest === '%s'\n", dest);
printf("este es el string src === '%s'\n", src);
ft_strlcat( dest,  src, len);
int result = ft_strlcat( dest,  src, len);
printf("este es el string dest ft_strlcat === '%d'\n", result); */


int res = strlcat( dest,  src, len);
printf("este es el string src strlcat === '%s'\n", src);
printf("este es el string dest strlcat === '%s'\n", dest);
printf("este es el string resultado strlcat === '%d'\n", res);
 return (0);
}
