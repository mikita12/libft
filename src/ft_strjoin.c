#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2) {
  int ret_len = ft_strlen(s1) + ft_strlen(s2);
  int len1 = ft_strlen(s1);
  int len2 = ft_strlen(s2);

  char *ret = malloc(sizeof(char) * (ret_len + 1));
  if (!ret) { // malloc fail
    return NULL;
  }

  ft_memcpy(ret, s1, len1);
  ft_memcpy(ret + len1, s2, len2);

  ret[len1 + len2] = '\0';

  return ret;
}