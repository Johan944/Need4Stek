/*
** detect_end.c for  in /home/ganem-_j/CPE_2015_n4s/srcs
**
** Made by Johan Ganem--Brunet
** Login   <ganem-_j@epitech.net>
**
** Started on  Sun May 29 21:33:37 2016 Johan Ganem--Brunet
** Last update Sun May 29 21:37:31 2016 Johan Ganem--Brunet
*/

#include <stdlib.h>
#include "../includes/n4s.h"

int	detect_end(char *str)
{
  int	i;
  int	j;
  char	*new;

  if ((new = malloc(sizeof(char *) * my_strlen(str))) == NULL)
    return (-1);
  i = my_strlen(str) - 1;
  while (str[i] != ':' && str[i] != 0)
    i -= 1;
  i -= 1;
  while (str[i] != ':' && str[i] != 0)
    i -= 1;
  i += 1;
  j = 0;
  while (str[i] != ':' && str[i] != 0)
    new[j++] = str[i++];
  new[j] = 0;
  if (my_strcmp("Track Cleared", new) == 0)
    {
      free(new);
      exec_cmd("stop_simulation\n");
      return (1);
    }
  free(new);
  return (0);
}
