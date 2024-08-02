NAME = zombie
CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
H_PATH = -I.
SRCS = main.cpp \
	   newZombie.cpp \
	   randomChump.cpp \
	   Zombie.cpp
OBJS = $(patsubst %.cpp,%.o,$(SRCS))

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

$(OBJS):%.o:%.cpp
	$(CXX) $(CXXFLAGS) $(H_PATH) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:clean
	rm -f $(NAME)

re:fclean all

.PHONY: all clean fclean re