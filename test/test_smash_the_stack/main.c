/*
** main.c for smash_the_stack in /home/tessie_g//afs/rendu/projets/pepito/test/test_smash_the_stack
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Tue Apr  3 22:05:41 2012 adrian tessier
** Last update Fri Apr  6 15:50:45 2012 adrian tessier
*/

#include "lib/my.h"

void	my_put_truc()
{
  write(1, "Truc.\n", 6);
  return ;
}

void	function(int a, int b, int c)
{
  char	buffer1[5];
  char	buffer2[10];
  int	*ret;

  ret = buffer1 + 24;
  *(ret) = 0x4004c4;
}

int	main(int argc, char **argv)
{
  int	x;

  x = 0;
  function(1,2,3);
  x = 1;
  my_putnbr(x);
  my_putchar('\n');
}
