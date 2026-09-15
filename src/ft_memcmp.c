#include "libft.h"
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n) {
  if (n == 0)
    return 0;

  size_t i = 0;
  const unsigned char *s1_cp = (const unsigned char *)s1;
  const unsigned char *s2_cp = (const unsigned char *)s2;
  while (i < n) {

    if (s1_cp[i] != s2_cp[i])
      return s1_cp[i] - s2_cp[i];

    i++;
  }

  return 0;
}