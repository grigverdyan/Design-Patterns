NAME			= composite
MKDIR			= mkdir -p
CXX				= g++
CXXFLAGS		= -Wall -Wextra -Werror --std=c++17 -g -ggdb3
SRCS			= $(wildcard *.cpp)
OBJS_DIR		= objs
OBJS			= $(patsubst %.cpp, $(OBJS_DIR)/%.o, $(SRCS))
RM				= rm -rf

RESET			= "\033[0m"
BLACK    		= "\033[30m"    # Black
RED      		= "\033[31m"    # Red
GREEN    		= "\033[32m"    # Green
YELLOW   		= "\033[33m"    # Yellow
BLUE     		= "\033[34m"    # Blue
MAGENTA  		= "\033[35m"    # Magenta
CYAN     		= "\033[36m"    # Cyan
WHITE    		= "\033[37m"    # White

all : $(NAME)

$(NAME) : $(OBJS)
	@echo $(YELLOW) " - Compiling $(NAME)..." $(RESET)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo $(GREEN)" - Compiling FINISHED"$(RESET)

$(OBJS_DIR)/%.o : %.cpp | $(OBJS_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJS_DIR) :
	@$(MKDIR) $(OBJS_DIR)

clean :
	@$(RM) $(OBJS_DIR)

fclean : clean
	@$(RM) $(NAME)
	@echo  $(RED) " - Cleaned!" $(RESET)

re: fclean all

.PHONY: all clean fclean re
