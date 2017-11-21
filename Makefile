##
## Makefile for ID3 in /home/cyborgforever/Github/ID3
## 
## Made by Julien Chassard
## Login   <julien.chassard@epitech.eu>
## 
## Started on  Mon Nov 20 19:23:37 2017 Julien Chassard
## Last update Tue Nov 21 07:16:04 2017 Julien Chassard
##

CC	=	gcc

CFLAGS  =       -ansi -pedantic -Wall -Wextra -Iinclude
CFLAGS  +=      -Wwrite-strings -Wpointer-arith -Wfloat-equal
CFLAGS  +=      -Wcast-align -Wshadow -Wredundant-decls
CFLAGS  +=      -Winit-self -Wswitch-default -Wswitch-enum
CFLAGS  +=      -Wundef -Wlogical-op -Winline -Wdouble-promotion

NAME	=	id3v1

RM	=	rm -f

SRC	=	src/main.c		\
		src/parse.c		\
		src/print_infos.c

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LFLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) $(addsuffix ~, $(SRC))

fclean:
	$(RM) $(OBJ)
	$(RM) $(addsuffix ~, $(SRC))
	$(RM) $(NAME)

re: fclean all

.PHONY:	all libs clean fclean re
