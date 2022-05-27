NAME = phonebook

SRCS = Phonebook.cpp Contact.cpp main.cpp

OBJS = ${SRCS:.cpp = .o}

FLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
		c++ ${FLAGS} ${SRCS} -o ${NAME}
clean:
		rm -rf ${OBJS}

fclean: clean
		rm -rf ${NAME}

.PHONY: all clean fclean re