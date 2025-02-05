NAME=phonebook
CC=c++
FLAGS=-Wall -Wextra -Werror -std=c++98 -g3

CPP_FILES= main.cpp Phonebook.cpp Contact.cpp
CPP_OFILES=${CPP_FILES:.cpp=.o}

all:$(NAME)

$(NAME):$(CPP_OFILES)
	$(CC) $(FLAGS) $(CPP_OFILES) -o $(NAME)

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(CPP_OFILES)

fclean: clean
	rm -f $(NAME)
re: fclean all