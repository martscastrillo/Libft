#include <stdio.h>
#include <string.h>
     int ft_memcmp(const void *s1, const void *s2, size_t n);
int main () {
   char str1[15];
   char str2[15];
      char str3[15];
   char str4[15];
   int ret;
    int    ret2 ;
   memcpy(str1, "ABCDEF", 6);
   memcpy(str2, "abcdef", 6);

   ret = memcmp(str1, str2, 5);
    printf("%d \n", ret);
  
   memcpy(str3, "ABCDEF", 6);
   memcpy(str4, "abcdef", 6);
     ret2 = ft_memcmp(str3, str4, 5);
    printf("%d \n", ret2);
   return(0);
}