
NAME = phonebook

STD = -std=c++98

SOURCE_FILES =	main.cpp face.cpp

SRC = $(SOURCE_FILES)

OBJS = $(SRC:.cpp=.o)

CXX = clang++
CXXFLAGS = $(STD) -Wall -Wextra -Werror

$(NAME):	$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all:		$(NAME)

clean:
	rm -rf $(OBJS)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all