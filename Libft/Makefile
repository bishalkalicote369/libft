NAME    = libft.a
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar
ARFLAGS = rcs
SRCS    = ft_atoi.c ft_isalpha.c ft_isdigit.c ft_strdup.c ft_tolower.c \
          ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_toupper.c
OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
