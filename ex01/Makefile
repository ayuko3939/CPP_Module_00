NAME = PhoneBook

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_DIR = srcs
SRCS = main.cpp \
	   PhoneBook.cpp \
	   Contact.cpp

OBJ_DIR = objs
OBJS = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

INCS = -I includes

GREEN = \033[38;5;082;1m
END = \033[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(GREEN)Compiling $(NAME)...$(END)"
	@$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) $(INCS) -c $< -o $@

clean:
	@echo "$(GREEN)Removing object files...$(END)"
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "$(GREEN)Removeing $(NAME)...$(END)"
	@rm -rf $(NAME)

re : fclean all