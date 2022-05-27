NAME = megaphone

FLAGS = -Werror -Wextra -Wall 

SRCS = megaphone.cpp

OBJS = ${SRCS:.cpp=.o}

RM = rm -f

all:${NAME}

${NAME}: 	${OBJS}
		c++ ${FLAGS} ${OBJS} -o ${NAME}

clean: 
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re