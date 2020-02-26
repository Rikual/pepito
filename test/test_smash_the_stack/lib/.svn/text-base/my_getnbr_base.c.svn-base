/*
** my_getnbr_base.c for 102matrice in /home/tessie_g//afs/rendu/projets/maths/102matrice
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Tue Nov 22 16:07:33 2011 adrian tessier
** Last update Tue Mar  6 15:37:55 2012 adrian tessier
*/

#include "my.h"

int	my_getnbr_base(char *nbr, char *base)
{
  int	sign;
  int	nb;
  int	pos;
  int	pos2;

  pos = -1;
  nb = 0;
  sign = 1;
  while (nbr[++pos] && (nbr[pos] == '+' || nbr[pos] == '-'))
    if (nbr[pos] == '-')
      sign = sign * -1;
  nbr = nbr + pos;
  pos = -1;
  while (nbr[++pos] && ((nbr[pos] <= '9' && nbr[pos] >= '0') ||
			(nbr[pos] <= 'F' && nbr[pos] >= 'A')))
    {
      nb = nb * my_strlen(base);
      pos2 = -1;
      while (base[++pos2] != nbr[pos])
	pos2 = pos2;
      nb = nb + pos2;
    }
  return (nb * sign);
}
