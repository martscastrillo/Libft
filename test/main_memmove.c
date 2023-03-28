#include <stdio.h>
#include <string.h>
void *ft_memmove(void *dst, const void *src, size_t len);
int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   char dest1[] = "oldstring";
   const char src1[]  = "newstring";

   printf("Before memmove dest1 = %s, src1 = %s\n", dest1, src1);
   ft_memmove(dest1, src1, 9);
   printf("After memmove dest1 = %s, src1 = %s\n", dest1, src1);



   char dest2[];
   const char src2[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest2, src2);
   memmove(dest2, src2, 9);
   printf("After memmove dest = %s, src = %s\n", dest2, src2);
   
   return(0);
}