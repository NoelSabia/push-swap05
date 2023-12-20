CC		= gcc
CFLAGS	= -Wall -Wextra
NAME	= push_swap

SRC_PATH = src/
OBJ_PATH = obj/

SRC		= main.c \
			check_parameters.c\
			check_parameters_helper.c\
			check_parameters_helper2.c\
			is_sorted.c\
			laying_v_sort.c\
			push_in_stacks.c\
			push.c\
			rotate_a_and_b_helper.c\
			rotate_a_and_b.c\
			rotate_a.c\
			rotate_b.c\
			tiny_sort.c\


SRCm	= $(addprefix $(SRC_PATH), $(SRC))
OBJ		= $(SRC:.c=.o)
OBJS	= $(addprefix $(OBJ_PATH), $(OBJ))
INCS	= -I ./includes/

all: $(OBJ_PATH) $(NAME) 

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCS)

$(OBJ_PATH):
	mkdir $(OBJ_PATH)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all