/*
** my_getnbr_unsigned.c for my in /home/tessie_g//afs/rendu/projets/corewar/lib
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Mon Mar 19 11:55:46 2012 adrian tessier
** Last update Mon Mar 19 11:57:08 2012 adrian tessier
*/

#include "my.h"

unsigned int	my_getnbr_unsigned(char *str)
{
  unsigned int	nb;
  int		pos;

  nb = 0;
  pos = -1;
  while (str[++pos] && is_num(str[pos]) == 1)
    {
      nb = nb * 10;
      nb = nb + (str[pos] - '0');
    }
  return (nb);
}
