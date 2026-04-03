NAME = materia

RM = rm -rf
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror -I.


SRC =	main.cpp \
		AMateria.cpp \
		MateriaSource.cpp \
		Character.cpp \
		Ice.cpp \
		Cure.cpp

OBJ = $(SRC:%.cpp=%.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re