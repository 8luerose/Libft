CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = cr
RM = rm -f
NAME = libft.a

SRCS = ft_strlen.c	\
	   ft_strlcpy.c	\
	   ft_strlcat.c	\
	   ft_strchr.c	\
	   ft_strnstr.c	\
	   ft_strncmp.c	\
	   ft_

SRCS_BONUS = 

SRCS = $(SRCS_1) $(SRCS_2)

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

clean :
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

bonus : $(OBJS) $(OBJS_BONUS)
	$(AR) $(ARFLAGS) $(NAME) $^

.PHONY : all clean fclean re
	
