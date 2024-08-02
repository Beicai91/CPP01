NAME = zombieHorde
CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
H_PATH = -I.
SRCS = main.cpp \
	   Zombie.cpp \
	   zombieHorde.cpp
OBJS = $(patsubst %.cpp,%.o,$(SRCS))

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $@

$(OBJS):%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:clean
	rm -f $(NAME)

re:fclean all

.PHONY: all clean fclean re