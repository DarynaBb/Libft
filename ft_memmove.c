#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
   size_t   i;
   unsigned char *destination; 
   unsigned char *source;
   
   if (!dest && !src)
    return (NULL);

    destination = (unsigned char *)dest;
    source = (unsigned char *)src;
    

   if (destination < source || destination > source + n)
   {
    i = 0;
    while (i < n) {
        destination[i] = source[i];
        i++;
    }
   } else 
   {
    i = n;
    while (i > 0)
    {
        i--;
        destination[i] = source[i];
    }
   }
   return (dest);
}