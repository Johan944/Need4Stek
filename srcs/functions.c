/*
** functions.c for  in /home/ganem-_j/CPE_2015_n4s/srcs
**
** Made by Johan Ganem--Brunet
** Login   <ganem-_j@epitech.net>
**
** Started on  Sat May 28 17:30:05 2016 Johan Ganem--Brunet
** Last update Sun May 29 17:45:04 2016 Johan Ganem--Brunet
*/

#include <unistd.h>

void	my_putchar(char c, int i)
{
  write(i, &c, 1);
}

void	my_putstr(char *str, int j)
{
  int	i;

  i = 0;
  while (str[i])
    my_putchar(str[i++], j);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i += 1;
  return (i);
}

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] && s2[i] && s1[i] == s2[i])
    i += 1;
  return (s1[i] - s2[i]);
}
