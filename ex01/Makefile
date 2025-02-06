NAME=PhoneBook
CXX=c++
CXXFLAGS=-Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
CPP_FILES=main.cpp Contact.cpp PhoneBook.cpp
O_FILES=$(CPP_FILES:.cpp=.o)

all:$(NAME)

$(NAME):$(O_FILES)
	$(CXX) $(CXXFLAGS) $(O_FILES) -o $(NAME)
clean:
	rm -f $(O_FILES)
fclean:clean
	rm -f $(NAME)
re: fclean all