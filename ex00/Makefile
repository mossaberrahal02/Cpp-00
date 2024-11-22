NAME=megaphone
CPP=c++
FLAGS=-Wall -Wextra -std=c++98 #-Werror

CPP_FILES=megaphone.cpp
CPP_OFILES=${CPP_FILES:.cpp=.o}

all: $(NAME)

$(NAME):$(CPP_OFILES)
	$(CPP) $(FLAGS) $(CPP_OFILES) -o $(NAME)

%.o:%.c
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(CPP_OFILES)

fclean:
	rm -f $(CPP_OFILES) $(NAME)
re:fclean all