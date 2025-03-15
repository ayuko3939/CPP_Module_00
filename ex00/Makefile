NAME = megaphone

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

GREEN = \033[38;5;082;1m
END = \033[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(GREEN)Compiling $(NAME)...$(END)"
	@$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "$(GREEN)Removing object files...$(END)"
	@$(RM) $(OBJS)

fclean: clean
	@echo "$(GREEN)Removeing $(NAME)...$(END)"
	@$(RM) $(NAME)

re : fclean all