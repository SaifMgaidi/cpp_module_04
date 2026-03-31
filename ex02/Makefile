NAME = abstract

RM = rm -rf
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror -I.


SRC =	Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		main.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		Brain.cpp

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