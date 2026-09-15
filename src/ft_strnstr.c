#include "libft.h"
#include <string.h>

char *ft_strnstr(const char *big, const char *little, size_t len) {
  if (little[0] == '\0')
    return (char *)big; // to juz utworzy nowy adres?
  size_t i = 0;
  size_t l_len = ft_strlen(little);

  while (i < len && big[i] != '\0') {
    if (l_len + i > len)
      break;

    if (ft_strncmp(big+i, little, l_len) == 0) {
      return (char *)big + i;
    }
    i++;
  }

  return NULL;
}