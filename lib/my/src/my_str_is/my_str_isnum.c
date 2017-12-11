#include <stdlib.h>
#include "my.h"

int		my_str_isnum(const char *str)
{
  t_uint	idx;

  if (str == NULL)
    return (FALSE);
  idx = 0;
  while (str[idx])
    {
      if (!(str[idx] >= '0' && str[idx] <= '9')
	  && str[idx] != '-' && str[idx] != '+')
	return (FALSE);
      idx += 1;
    }
  return (TRUE);
}
