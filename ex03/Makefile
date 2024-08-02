NAME = battle
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
H_PATH = -I.
SRCS = main.cpp \
	   HumanA.cpp \
	   HumanB.cpp \
	   Weapon.cpp
OBJS = $(patsubst %.cpp,%.o,$(SRCS))

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

$(OBJS):%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:clean
	rm -f $(NAME)

.PHONY:all clean fclean re