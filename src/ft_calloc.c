#include "libft.h"
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

void *ft_calloc(size_t n, size_t size) {

  if (n == 0 || size == 0)
    return malloc(0);

  if (n > SIZE_MAX / size)
    return NULL;

  void *ptr = malloc(n * size);
  if (!ptr)
    return NULL;

  ft_memset(ptr, 0, n * size);

  return ptr;
}