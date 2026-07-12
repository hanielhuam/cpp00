CPP = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98
SRC_DIR = src
OBJ_DIR = obj

SRCS = ${SRC_DIR}/megaphone.cpp

OBJS = $(SRCS:${SRC_DIR}/%.cpp=${OBJ_DIR}/%.o)

NAME = megaphone

all: ${NAME}

$(NAME): ${OBJS}
	$(CPP) ${CFLAGS} ${OBJS} -o ${NAME}

${OBJ_DIR}/%.o: ${SRC_DIR}/%.cpp
	mkdir -p $(dir $@)
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -rf ${OBJ_DIR}

fclean: clean
	rm -rf ${NAME}

re: fclean all
