/*
** my_free_tabstr.c for lib in 
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Thu Mar  1 18:04:23 2012 adrian tessier
** Last update Tue Mar  6 13:47:54 2012 adrian tessier
*/

#include <stdlib.h>
#include "my.h"

void	my_free_tabstr(char **tabstr)
{
  int	i;

  i = -1;
  if (tabstr == NULL)
    return ;
  if (tabstr[0] == NULL)
    {
      free(tabstr);
      return ;
    }
  i = -1;
  while (tabstr[++i])
    free(tabstr[i]);
  free(tabstr);
}
