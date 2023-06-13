NAME = libftprintf.a

SOURCE = ft_printf.c\
			ft_putchar.c\
			ft_putstr.c\
			ft_puthexa.c\
			ft_putdec.c\
			ft_putptr.c\
			ft_putunsign.c\


OBJECTS = $(SOURCE:.c=.o)

OBJECTS_BONUS = $(SOURCE_BONUS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)
$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)
$(OBJECTS): $(SOURCE)
	gcc $(CFLAGS) -c $(SOURCE)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re all clean fclean