SRCS   := ft_isalpha.c ft_isdigit.c ft_isalnum.c  ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c\
         ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c\
		 ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c\
		 ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
		 ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS_B := ft_lstnew_bonus.c ft_lstadd_front_bonus.c 	ft_lstsize_bonus.c ft_lstlast_bonus.c\
		 ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c\
		 ft_lstmap_bonus.c

OBJS_DIR = ./objs
#OBJS   := ${SRCS:.c=.o}
OBJS := $(patsubst %.c, $(OBJS_DIR)/%.o, $(SRCS))
#OBJS_B := ${SRCS_B:.c=.o}
OBJS_B := $(patsubst %.c, $(OBJS_DIR)/%.o, $(SRCS_B))

AR     = ar rc
RM     = rm -f
CC     = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: ${NAME}
bonus: .bonus

${NAME}: $(OBJS_DIR) ${OBJS}
	@${AR} ${NAME} ${OBJS}
	@echo "libft.a is genrated"

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: %.c
	@${CC} ${CFLAGS} -c $< -o $@

.bonus: ${NAME} ${OBJS_B}
	@${AR} ${NAME} $^
	@touch .bonus
	@echo "bonus functions added"

clean:
	@${RM} ${OBJS} ${OBJS_B}
	@$(RM) -r $(OBJS_DIR)
	@echo "objs are removed"

fclean:	clean
	@${RM} ${NAME} .bonus
	@echo "libft.a is removed"

re:	fclean all

.PHONY:		bonus all clean fclean re
