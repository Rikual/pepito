/*
** my_get_shells.c for my_sh2 in /home/tessie_g//afs/rendu/projets/minishell2
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Sun Mar  4 15:47:43 2012 adrian tessier
** Last update Tue Mar  6 21:54:48 2012 adrian tessier
*/

#include <stdlib.h>
#include "my.h"

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = -1;
  if (s1 == NULL || s2 == NULL)
    return (-420);
  while (*s1 && *s2 && *s1 == *s2 && ++i < n - 1)
    {
      s1++;
      s2++;
    }
  return (*s1 - *s2);
}
