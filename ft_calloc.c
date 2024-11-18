#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	if (nmemb != 0 && size != 0)
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}
