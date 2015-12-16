##
## Makefile for  in /home/jb-veron/C/Midgard
## 
## Made by VERON Jean-baptiste
## Login   <veron_j@etna-alternance.net>
## 
## Started on  Wed Dec 16 09:50:05 2015 VERON Jean-baptiste
## Last update Wed Dec 16 09:54:26 2015 VERON Jean-baptiste
##

CC = gcc
NAME = sta
SRC = 	main.c \
	my_putstr.c \
	readline.c

OBJ = $(SRC:%.c=%.o)
CFLAGS = -W -Wall -Werror
RM = rm -f

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJ)
fclean:		clean
	$(RM) $(NAME)

re:	fclean all
