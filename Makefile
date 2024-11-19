# Program name
NAME = libft.a

# Compiler and flags
CC = cc 
CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c

# Object files
# automatically generates the names of the object files from the source files
OBJ = $(SRC:.c=.o)

# Header file
HEADER = libft.h

# Archive command
AR = ar
ARFLAGS = rcs

# Colors for better readability
GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

# Targets
.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJ)
	@echo "$(GREEN)Library $(NAME) created!$(RESET)"

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "$(RED)Object files removed!$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)Library $(NAME) removed!$(RESET)"

re: fclean all