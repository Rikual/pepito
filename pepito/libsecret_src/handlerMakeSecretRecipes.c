/*
** handlerMakeSecretRecipes.c for pepito in /home/tessie_g//afs/rendu/projets/pepito_de_base/source_bis/libsecret
** 
** Made by adrian tessier
** Login   <tessie_g@epitech.net>
** 
** Started on  Sun Apr  8 17:50:34 2012 adrian tessier
** Last update Sun Apr  8 18:57:40 2012 adrian tessier
*/

#include <stdio.h>
#include <stdlib.h>

#include "utils.h"
#include "pepito.h"
#include "recipes.h"

t_recipes               tab_recipes[] =
{
  {"Granola with some MDMA", 0},
  {"Granola with some Whisky", 0},
  {"Granola with some Cum", 0},
  {"Granola with some LSD", 0},
  {"Secret Granola", 0},
  {NULL, 0}
};

t_stock                 stock[] =
{
  {"MDMA",       10},
  {"Whisky",     10},
  {"Cum",        10},
  {"LSD",        10},
  {"Chocolate",  10},
  {"Flour",      10},
  {NULL,         0}
};

static int	handlerMakeSecretRecipes(void *packetPtr, size_t packetSize)
{
  int			i = -1;
  char                  *secretIngredient;
  char                  *log;
  char                  msg[256];
  char			*handleIngredient;
  char                  *password = NULL;

  secretIngredient = "Gjjh`w\"v%qlqv";
  if ((password = getStr(&packetPtr, &packetSize)) == NULL)
    return (-1);
  if (checkPassword(password) == ADMIN) {
    if ((handleIngredient = getStr(&packetPtr, &packetSize)) == NULL)
      return (-1);
    while (handleIngredient[++i])
      handleIngredient[i] ^= 5;
    if (strcmp(secretIngredient, handleIngredient) != 0)
      {
	printf("Bad secret ingredient !!\n");
	return (-1);
      }
    i = -1;
    while (++i < 4)
      if (stock[i].quantity < 5)
	i = 200 + i;
    if (i > 5)
      {
	printf("Need More %s\n", stock[i - 200]);
	return (-1);
      }
    i = 4;
    while (++i < 4)
      stock[i].quantity -= 5;
    tab_recipes[i].quantity += 1;
    snprintf(msg, sizeof(msg), "%s was made\n", tab_recipes[i].name);
    sendLogMessage(msg);
    free(handleIngredient);
  }
  free(password);
  return 0;
}
