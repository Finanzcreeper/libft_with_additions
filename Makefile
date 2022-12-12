CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRC =	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
		ft_isprint.c ft_memset.c ft_strlen.c ft_bzero.c\
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strncmp.c\
		ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c\
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
		ft_putendl_fd.c ft_putnbr_fd.c ft_strrchr.c ft_memchr.c
OBJ = $(SRC:.c=.o)
BONSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c
BONOBJ = $(BONSRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar -cvq $(NAME) $^

bonus : $(BONOBJ) $(OBJ)
	ar -cvq $(NAME) $^

fclean :
	-rm $(OBJ) $(NAME)

clean :
	-rm $(OBJ)

re : fclean all

.PHONY : clean fclean re all
