/*
** ia.c for  in /home/ganem-_j/CPE_2015_n4s
**
** Made by Johan Ganem--Brunet
** Login   <ganem-_j@epitech.net>
**
** Started on  Sat May 28 21:08:03 2016 Johan Ganem--Brunet
** Last update Sun May 29 21:39:47 2016 Johan Ganem--Brunet
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "../includes/get_next_line.h"

char	*check_str(char *str)
{
  int	a;
  int	b;
  char	*tmp;

  a = 0;
  b = 0;
  if ((tmp = malloc(sizeof(char *) * 100)) == NULL)
    return (NULL);
  while (a != 3)
    if (str[b++] == ':')
      a++;
  a = 0;
  while (str[b] != 0)
    {
      if ((str[b] >= '0' && str[b] <= '9') || str[b] == '.' || str[b] == ':')
	{
	  tmp[a] = str[b];
	  a++;
	}
      b++;
    }
  tmp[a - 1] = '\0';
  return (tmp);
}

int	detect_col(char **tab)
{
  int	i;

  i = 2;
  while (i != 30)
    {
      if (my_atof(tab[i++]) <= 10)
	return (1);
    }
  return (0);
}

int	get_speed(float mid)
{
  int	i;

  if (mid >= 2000)
    i = exec_cmd("car_forward:1.0\n");
  else if (mid >= 1500)
    i = exec_cmd("car_forward:0.8\n");
  else if (mid >= 1000)
    i = exec_cmd("car_forward:0.5\n");
  else if (mid >= 600)
    i = exec_cmd("car_forward:0.4\n");
  else if (mid >= 400)
    i = exec_cmd("car_forward:0.2\n");
  else
    i = exec_cmd("car_forward:0.1\n");
  return (i);
}

int	ia()
{
  char	**tab;
  char	*str;
  float mid;

  while (1)
    {
      my_putstr("get_info_lidar\n", 1);
      str = get_next_line(0);
      detect_end(str);
      str = check_str(str);
      tab = my_show_wordtab2(str, ':');
      mid = my_atof(tab[15]);
      if (get_speed(mid) == 1)
	break ;
      my_putstr("get_info_lidar\n", 1);
      str = get_next_line(0);
      detect_end(str);
      str = check_str(str);
      tab = my_show_wordtab2(str, ':');
      mid = my_atof(tab[15]);
      if (get_dir(tab, mid) == 1)
	break ;
    }
  return (0);
}

int	main()
{
  exec_cmd("start_simulation\n");
  ia();
  return (0);
}
