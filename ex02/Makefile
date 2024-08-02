NAME = ptr_ref
CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp
OBJS = $(patsubst %.cpp,%.o,$(SRCS))

all: $(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

$(OBJS):%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:clean
	rm -f $(NAME)

re:fclean all

.PHONY: all clean fclean re