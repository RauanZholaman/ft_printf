CFLAGS = -Wall -Wextra -Werror
CC = cc

SRC = ft_atoi.c ft_isdigit.c \
      ft_isalpha.c ft_isalnum.c \
      ft_isascii.c ft_isprint.c \
      ft_strlcpy.c ft_strlen.c \
      ft_strlcat.c ft_memset.c \
      ft_bzero.c ft_memcpy.c \
      ft_memmove.c ft_memchr.c \
      ft_memcmp.c ft_calloc.c \
      ft_strdup.c ft_substr.c \
      ft_strchr.c ft_strnstr.c \
      ft_tolower.c ft_toupper.c \
      ft_strrchr.c ft_strncmp.c \
      ft_strjoin.c ft_strtrim.c \
      ft_split.c  ft_itoa.c     \
      ft_striteri.c ft_strmapi.c \
      ft_putchar_fd.c ft_putstr_fd.c \
      ft_putendl_fd.c ft_putnbr_fd.c \

OBJ = $(SRC:.c=.o) 

NAME = libft.a
HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ) 

BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
             ft_lstsize_bonus.c ft_lstlast_bonus.c \
             ft_lstadd_back_bonus.c \

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(NAME) .build_bonus

.build_bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)
	ranlib $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re bonus
