#include "libft.h"
#include <stdlib.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len) {

  char *ret = malloc(len + 1);
  size_t i = 0;
  while (i < len && s[i + start] != '\0') {
    ret[i] = s[i + start];
    i++;
  }

  ret[i] = '\0';

  return ret;
}