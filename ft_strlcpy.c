#include "libft.h"

 size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
 {
	size_t len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(dst);
	while (src[i] != '\0' && i < dstsize -1)
	{
		dst[i] = src[i];
		i ++;
	}
	while (i < dstsize -1)
	{
		dst[i] = '\0';
		i ++;
	}	
	return (len);
 }

