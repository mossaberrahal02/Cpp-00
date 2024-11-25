NAME=phonebook
CC=c++
FLAGS=-Wall -Wextra -Werror -std=c++98

CPP_FILES=${wildcard *.cpp}
CPP_OFILES=${CPP_FILES:.cpp=.o}

all:$(NAME)

$(NAME):$(CPP_OFILES)
	$(CC) $(FLAGS) $(CPP_OFILES) -o $(NAME)

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(CPP_OFILES)

fclean: clean
	rm -f $(NAME)
re: fclean all