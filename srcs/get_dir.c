/*
** get_dir.c for  in /home/ganem-_j/CPE_2015_n4s/srcs
**
** Made by Johan Ganem--Brunet
** Login   <ganem-_j@epitech.net>
**
** Started on  Sat May 28 17:51:48 2016 Johan Ganem--Brunet
** Last update Sun May 29 21:21:20 2016 Johan Ganem--Brunet
*/

#include "../includes/n4s.h"
#include "../includes/get_next_line.h"

int	right_or_left(float idx, char *val)
{
  my_putstr("wheels_dir:", 1);
  if (idx < 0.0)
    my_putchar('-', 1);
  my_putstr(val, 1);
  val = get_next_line(0);
  if (detect_end(val) == 1)
    return (1);
  return (0);
}

int	get_dir(char **tab, float mid)
{
  float	right;
  float	left;
  int	i;

  left = my_atof(tab[1]);
  right= my_atof(tab[31]);
  if (mid >= 1500)
    i = right_or_left(left - right, "0.005\n");
  else if (mid >= 1000)
    i = right_or_left(left - right, "0.05\n");
  else if (mid >= 600)
    i = right_or_left(left - right, "0.1\n");
  else if (mid >= 400)
    i = right_or_left(left - right, "0.2\n");
  else if (mid >= 200)
    i = right_or_left(left - right, "0.3\n");
  else
    i = right_or_left(left - right, "0.5\n");
  return (i);
}
