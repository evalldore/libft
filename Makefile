BIN			= bin
SRCS		= ft_isalpha.c \
			ft_isdigit.c \
			ft_isascii.c \
			ft_isalnum.c \
			ft_isalnum.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_strdup.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c

OBJS		= $(addprefix $(BIN)/, $(SRCS:.c=.o))
NAME		= libft.a
TEST		= test
CC			= gcc
RM			= rm -f
LIBC		= ar rc
CFLAGS		= -Wall -Wextra -Werror

all	: $(NAME)

$(NAME): $(BIN) $(OBJS)
	$(LIBC) $@ $(OBJS)

test: test.c
	$(CC) $(CFLAGS) -o test test.c $(NAME)
	./test
	rm test

$(BIN)/%.o : %.c
	$(CC) -c $(CFLAGS) -o $@ $^
	
$(BIN) :
	mkdir bin

clean :
	$(RM) $(OBJS)
	$(RM) -r $(BIN)

fclean : clean
	$(RM) $(NAME)

re : fclean all