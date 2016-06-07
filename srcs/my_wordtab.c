/*
** option_exec.c for a in /home/soucan_d/Projets/Archives/PSU_2015_minishell1
**
** Made by Dimitri
** Login   <soucan_d@epitech.net>
**
** Started on  Sun Mar 13 22:05:37 2016 Dimitri
** Last update Sun May 29 21:41:20 2016 Johan Ganem--Brunet
*/

#include "../includes/n4s.h"

char	**my_show_wordtab2(char *str, char lim)
{
  char	**tab;
  int	i;
  int	j;
  int	k;

  if ((tab = malloc(sizeof(char **) * my_strlen(str))) == NULL)
    return (NULL);
  i = 0;
  j = 0;
  while (str[i] != 0)
    {
      k = 0;
      if ((tab[j] = malloc(sizeof(char *) * my_strlen(str))) == NULL)
	return (NULL);
      while (str[i] == lim && str[i++] != 0);
      while (str[i] != lim && str[i] != 0)
	tab[j][k++] = str[i++];
      tab[j++][k] = 0;
      while (str[i] == lim && str[i++] != 0);
    }
  tab[j] = NULL;
  return (tab);
}
