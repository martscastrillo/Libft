CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

COMPILE = ${CC} ${CFLAGS}

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c

OBJ = ${SRC:%.c=%.o} 

all: ${NAME}

${NAME}: ${OBJ}
	ar -rcs ${NAME} ${OBJ}

%.o: %.c
	$(COMPILE) -c $< -o $@

# Cleaning

clean:
	@echo Limpiando los .o ...
	@rm -f ${OBJ}
	@echo OK

fclean: clean
	@echo ${TEST_FILE} a la caca
	@rm -f ${TEST_FILE}

# TESTS

TEST_FILE = pepino

TEST_SRC = test/main_isalnum.c main_isalpha.c main_isascii.c main_isdigit.c main_isprint.c main_strlen.c
TEST_OBJ = ${TEST_SRC:%.c=%.o}

run: ${TEST_FILE}
	./${TEST_FILE}

${TEST_FILE}: ${TEST_OBJ} ${NAME}
	${COMPILE} ${TEST_OBJ} ${NAME} -o ${TEST_FILE}
