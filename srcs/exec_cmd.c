/*
** exec_cmd.c for  in /home/ganem-_j/CPE_2015_n4s/srcs
**
** Made by Johan Ganem--Brunet
** Login   <ganem-_j@epitech.net>
**
** Started on  Sun May 29 21:35:47 2016 Johan Ganem--Brunet
** Last update Sun May 29 21:37:49 2016 Johan Ganem--Brunet
*/

#include "../includes/get_next_line.h"
#include "../includes/n4s.h"

int	exec_cmd(char *str)
{
  my_putstr(str, 1);
  str = get_next_line(0);
  if (detect_end(str) == 1)
    return (1);
  return (0);
}
