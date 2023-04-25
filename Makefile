# Compiler options

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

COMPILE = ${CC} ${CFLAGS}

# Default libft code

ANALYZE		=	ft_atoi.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strchr.c \
				ft_strlen.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c

LIST		=	ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstsize.c

MODIFY		=	ft_bzero.c \
				ft_calloc.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_split.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strmapi.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c

PRINT		=	ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \

LIBFT_SRC	=	$(PRINTF:%=ft_printf/%) \
				$(ANALYZE:%=analyze/%) \
				$(MODIFY:%=modify/%) \
				$(LIST:%=list/%) # Bonus

SOURCE		=	$(LIBFT_SRC) # Libft files

SRC_CODE	=	$(SOURCE:%=$(SRC)/%)
OBJ			=	$(SRC_CODE:$(SRC)/%.c=$(BIN)/%.o)

# Triggers

all: ${NAME}

${NAME}: ${OBJ}
	ar -rcs ${NAME} ${OBJ}


bonus:  ${OBJ_BONUS} ${OBJ}
	ar -rcs ${NAME} ${OBJ_BONUS} ${OBJ}

%.o: %.c
	$(COMPILE) -c $< -o $@

# Cleaning

clean:
	@echo Limpiando los .o ...
	@rm -f ${OBJ}
	@rm -f ${OBJ_BONUS}
	@echo OK

fclean: clean 
	@echo ${NAME} borrado
	@rm -f ${NAME}

re : fclean all
