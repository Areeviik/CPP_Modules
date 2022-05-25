NAME = phonebook

SRCS = phonebook.cpp contacts.cpp

OBJS = ${SRCS:.cpp = .o}

FLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
		clang++ ${FLAGS} ${SRCS} -o ${NAME}
clean:
		rm -rf ${OBJS}

fclean: clean
		rm -rf ${NAME}

.PHONY: all clean fclean re