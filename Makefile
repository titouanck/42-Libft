SRCS = $(wildcard ./libc/*.c) $(wildcard ./additional/*.c)

SRCSBONUS = ${SRCS} $(wildcard ./bonus/*.c) 

INC = ./includes/

OBJS = ${SRCS:.c=.o}

OBJSBONUS = ${SRCSBONUS:.c=.o} 

LIB = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I ${INC}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${LIB}:	${OBJS}
		ar -rsc ${LIB} ${OBJS}

bonus:	${OBJSBONUS}
		ar -rsc ${LIB} ${OBJSBONUS}

all: 	${LIB}

clean:	
		rm -f ${OBJSBONUS}

fclean:	clean;
		rm -f ${LIB}

re:	fclean all

.PHONY: all clean fclean re 