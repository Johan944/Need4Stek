/*
** my_atof.c for  in /home/ganem-_j/CPE_2015_n4s/srcs
**
** Made by Johan Ganem--Brunet
** Login   <ganem-_j@epitech.net>
**
** Started on  Sat May 28 17:24:25 2016 Johan Ganem--Brunet
** Last update Sat May 28 17:36:03 2016 Johan Ganem--Brunet
*/

#include <stdio.h>
#include "../includes/n4s.h"

float	my_atof(char *str)
{
  float	nb;
  int	i;
  int	idx;

  i = 0;
  nb = 0.0;
  idx = 0;
  while (str[idx] != 0 && str[idx] >= '0' && str[idx] <= '9')
    nb = nb * 10.0 + (str[idx++] - 48);
  idx += 1;
  if (str[idx] == '.')
    {
      while (str[idx] != 0)
	{
	  nb = nb * 10.0 + (str[idx] - 48);
	  i -= 1;
	}
    }
  while (i++ < 0)
    nb *= 0.1;
  return (nb);
}
