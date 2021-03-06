/*
** main.c for test in /home/tessie_g//afs/rendu/projets/pepito/test
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Mon Apr  2 20:52:40 2012 adrian tessier
** Last update Sat Apr  7 18:15:12 2012 adrian tessier
*/

#include "lib/my.h"
#include <string.h>
#include <stdlib.h>

#define NOTANUMBER 0xFFFF

int	getNumber(void **p, size_t *packetSize)
{
  int                   res = 0;
  void                  *save = *p;

  res = strtol(*p, (char **)p, 10);
  my_putstr("res = ");
  my_putnbr(res);
  my_putchar('\n');
  if (save == *p)
    return NOTANUMBER;
  *packetSize -= *p - save;
  return res;
}

char	*getStr(void **p, size_t *l)
{
  int                   len;
  char                  *res = NULL;

  if ((len = getNumber(p, l)) > 0)
    {
      res = malloc(len + 1);
      res[len] = '\0';
      strncpy(res, *p, len);
      (*p) += len;
      (*l) -= len;
    }
  return res;
}

void	truc()
{
  my_putstr("Truc.\n");
}

void	machin()
{
  my_putstr("Machin.\n");
}

void	bidule()
{
  my_putstr("Bidule.\n");
}

void	toi()
{
  my_putstr("Toi.\n");
}

int	main(int argc, char **argv)
{
  /*
    Test cryptage system ?
  int	i = 0;
  while (++i < 255)
    {
      my_putnbr(i);
      my_putstr(" = ");
      my_putchar('d' ^ i);
      my_putchar('\n');
    }
   */
  /*
    Test dépassement d'un tableau de pointeur sur fonction à l'envers
  void	(*point[5])();

  system("echo \'salut\'");
  point[0] = &truc;
  point[1] = &machin;
  point[2] = &bidule;
  point[3] = &toi;
  point[4] = NULL;
  printf("%p\n", &point[-1]);
  */
  /*    Test dépassement d'un int*/
  /*
  unsigned int	i = 2400000000;
  while (++i < 4000000000)
    {
      my_putnbr((int)i);
      my_putchar('\n');
    }*/
  /*
    test strcpy pourri (checkPassword)
  char	savePassword[64];

  if (argc != 2)
    return (1);
  strcpy(savePassword, argv[1]);
  my_putstr(savePassword);
  my_putchar('\n');
  */
  /*    recup secret ingredient
  int		count = 0;
  int		i;
  char		*str;

  str = "Gjjh`w\"v%qlqv";
  while (++count < 255)
    {
      i = -1;
      while (str[++i])
	my_putchar(str[i] ^ count);
      my_putchar('\n');
    }
  */
  /*
    Test
  char		*oldPassword;
  char		*newPassword;
  void		*str;
  size_t	len;

  if (argc != 2)
    return (1);
  len = (size_t)my_strlen(argv[1]);
  str = (void *)argv[1];
  getNumber(&str, &len);
  oldPassword = getStr(&str, &len);
  newPassword = getStr(&str, &len);
  my_putstr(oldPassword);
  my_putchar('\n');
  my_putstr(newPassword);
  my_putchar('\n');
  my_putnbr(my_strlen("Granola with some "));
  return (0);
*/
}
