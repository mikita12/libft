#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *lhs, const char *rhs, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		if (lhs[i] != rhs[i])
			return ((unsigned char)lhs[i] - (unsigned char)rhs[i]);
		if (lhs[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}