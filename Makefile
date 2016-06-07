##
## Makefile for a in /home/soucan_d/soucan_d/Projets/PSU_2015_minishell1
##
## Made by Dimitri
## Login   <soucan_d@epitech.net>
##
## Started on  Thu Jan 21 19:40:30 2016 Dimitri
## Last update Mon Jun  6 14:06:23 2016 Johan Ganem--Brunet
## Last update Thu Apr 28 15:20:01 2016 Dimitri
##

NAME		= ia

SRCS		+= srcs/get_next_line.c \
		   srcs/ia.c \
		   srcs/my_wordtab.c \
		   srcs/my_atof.c \
		   srcs/functions.c \
		   srcs/get_dir.c \
		   srcs/detect_end.c \
		   srcs/exec_cmd.c \

OBJS		= $(SRCS:.c=.o)

CC		= gcc

CFLAGS		+= -Wall -Werror -Wall -Wextra

ECHO		+= echo -e

RM		= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)
	@$(ECHO) '\033[01;34m---------------\033[01;34m->\033[01;32mAll compiled\033[01;34m<-\033[01;34m---------------\033[01;00m'

clean:
	$(RM) $(OBJS)
	@$(ECHO) '\033[01;31m-----------------\033[01;31m->\033[01;33mAll clean\033[01;31m<-\033[01;31m----------------\033[01;00m'

fclean: clean
	$(RM) $(NAME)
	@$(ECHO) '\033[01;36m---------------\033[01;36m->\033[01;36mBinary clean\033[01;36m<-\033[01;36m---------------\033[01;00m'

re: fclean all

.PHONY: all clean fclean re
