/*
** n4s.h for a in /home/soucan_d/Projets/CPE_2015_n4s
**
** Made by Dimitri
** Login   <soucan_d@epitech.net>
**
** Started on  Wed Apr 27 18:12:09 2016 Dimitri
** Last update Sun May 29 18:28:46 2016 Johan Ganem--Brunet
*/

#ifndef         N4S_H_
# define        N4S_H_

#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

typedef struct	s_wordtab2
{
  int		i;
  int		k;
  int		j;
  int		nb;
  char		**tab;
}		t_wordtab2;

char		**my_show_wordtab2(char *str, char lim);
char		*get_next_line(const int fd);
char		*check_str(char *str);
int		find_number_of_words2(char *str);
int		my_strlen(char *str);
int		my_strcmp(char *s1, char *s2);
int		detect_end(char *str);
int		detect_end(char *str);
float		my_atof(char *str);
void		my_putstr(char *str, int j);
int		get_dir(char **tab, float mid);
int		exec_cmd(char *str);
void		my_putchar(char c, int i);

#endif	/* !N4S_H_ */
