/*
** my_putnbr_base.c for 102matrice in /home/tessie_g//afs/rendu/projets/maths/102matrice
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Sun Dec  4 10:42:00 2011 adrian tessier
** Last update Fri Mar  9 13:12:42 2012 adrian tessier
*/

#include "my.h"

int	my_putnbr_base(int nb, char *base)
{
  long	nb2;

  nb2 = nb;
  if (nb2 < 0)
    {
      my_putchar('-');
      nb2 = nb2 * -1;
    }
  if (nb2 / my_strlen(base) > 0)
    my_putnbr_base(nb2 / my_strlen(base), base);
  my_putchar(base[nb2 % my_strlen(base)]);
  return (0);
}
