CC = cc
Cflags = -Wall -Werror -Wextra
Name = libft.a
SRC =	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
		ft_isprint.c ft_memset.c ft_strlen.c ft_bzero.c\
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strncmp.c\
		ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c\
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c
OBJ = $(SRC:.c=.o)

all : $(Name)

$(Name) : $(OBJ)
	ar -cvq $(Name) $^

fclean :
	-rm $(OBJ) $(Name)

clean :
	-rm $(OBJ)

re : fclean all

.PHONY : clean fclean re
