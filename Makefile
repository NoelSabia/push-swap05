CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= push_swap

SRC_PATH = src/
OBJ_PATH = obj/

SRC		= main.c \
			check_parameters.c\
			check_parameters_helper.c\
			check_parameters_helper2.c\
			is_sorted.c\
			push_in_stacks.c\
			pa.c\
			pb.c\
			ra.c\
			rb.c\
			rr.c\
			rra.c\
			rrb.c\
			rrr.c\
			sa.c\
			sb.c\
			tiny_sort.c\
			sort.c\
			sort_helper.c\
			sort_helper2.c\
			pseudo-fcts.c

SRCS	= $(addprefix $(SRC_PATH), $(SRC))
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