/*
** Epitech Security Lab
** http://esl.epitech.net - <staff@esl.epitech.eu>
**
** Mota, The Polish Plumber and Zerk wrote this.
** As long as you retain this notice you can do whatever
** you want with this stuff. If we meet some day, and you
** think this stuff is worth it, you can buy us [:drinks:]*
** in return.
*/

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "pepito.h"

#include "utils.h"

#define	NOTANUMBER 0xFFFF

/* Utils functions ---------------------------------------------- */

void
die(char *fctName) {
  perror(fctName);
  remove("pepito.pid");
  exit(EXIT_FAILURE);
}

char
getChar(void **p) {
  char			res;

  res = *(char *)(*p);
  (*p) += sizeof (res);
  return res;
}

int
getNumber(void **p, size_t *packetSize) {
  int 			res = 0;
  void			*save = *p;
  long int		tmp;

  tmp = strtol(*p, (char **)p, 10);
  if (tmp > 2147483648)
    {
      res = 2147483648;
      fprintf(stderr, "Int size exceeded : new return value changed\n");
    }
  else res = (int)tmp;
  if (save == *p)
    return NOTANUMBER;
  *packetSize -= *p - save;
  return res;
}

char
*getStr(void **p, size_t *l) {
  int 			len;
  char 			*res = NULL;

  if ((len = getNumber(p, l)) > 0) {
    if (len > 512)
      {
	len = 512;
	fprintf(stderr, "Necessary allowance exceeded : maximum size changed\n");
      }
    if (len > (int)*l || (res = malloc(len + 1)) == NULL)
      {
	fprintf(stderr, "Allocation Error: null value returned\n");
	return (NULL);
      }
    res[len] = '\0';
    strncpy(res, *p, len);
    (*p) += len;
    (*l) -= len;
  }
  return res;
}
