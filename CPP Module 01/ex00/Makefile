NAME =  BraiiiiiiinnnzzzZ

FLAGS = -Werror -Wextra -Wall -std=c++98

SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJS = ${SRCS:.cpp=.o}

RM = rm -rf

CC = c++

all:${NAME}

${NAME}: 	${OBJS}
		${CC} ${FLAGS} -o ${NAME} ${OBJS} 

clean: 
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re