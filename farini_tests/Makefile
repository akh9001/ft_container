NAME    = test
CC      = g++
FLAGS   = -Wall -Wextra -Werror -I../srcs -std=c++98 -Wno-unused-parameter -Wno-unused-local-typedefs -Wno-unused-variable -fsanitize=address
SRCS =  test_insert_n.cpp # test_construct.cpp test_resize.cpp test_reserve.cpp test_resize.cpp  test_resize_hardcore.cpp test_constructor_hardcore.cpp test_insert_range.cpp test_insert_n.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS)

%.o: %.cpp $(HEADS)
	@$(CC) $(FLAGS) $(FLAGS_DEBUG)  -o $(NAME) $<
	@./$(NAME)
	@echo 
	@echo 

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean all



