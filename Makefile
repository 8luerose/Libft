CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = cr
RM = rm -f
NAME = libft.a

SRCS = ft_isalnum.c    ft_isprint.c    ft_memcpy.c     ft_strchr.c     ft_strlcpy.c    ft_strrchr.c    ft_toupper.c	\
ft_atoi.c       ft_isalpha.c    ft_itoa.c       ft_memmove.c    ft_strdup.c     ft_strlen.c     ft_strtrim.c    	\
ft_bzero.c      ft_isascii.c    ft_memchr.c     ft_memset.c     ft_strjoin.c    ft_strncmp.c    ft_substr.c			\
ft_calloc.c     ft_isdigit.c    ft_memcmp.c     ft_split.c      ft_strlcat.c    ft_strnstr.c    ft_tolower.c		\

#SRCS_BONUS = 

#SRCS = $(SRCS_1) $(SRCS_2)
#SRCS = $(SRCS)


OBJS = $(SRCS:.c=.o)

#OBJS_BONUS = $(SRCS_BONUS:.c=.o)

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

#bonus : $(OBJS) $(OBJS_BONUS)
#	$(AR) $(ARFLAGS) $(NAME) $^

.PHONY : all clean fclean re
	
