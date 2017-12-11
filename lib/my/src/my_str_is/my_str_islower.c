#include <stdlib.h>
#include "my.h"

int		my_str_islower(const char *str)
{
  t_uint	idx;

  if (str == NULL)
    return (FALSE);
  idx = 0;
  while (str[idx] != '\0')
    {
      if (!(str[idx] >= 'a' && str[idx] <= 'z'))
	return (FALSE);
      idx += 1;
    }
  return (TRUE);
}
