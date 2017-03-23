CC = gcc
CFLAGS = -O0 -Wall -Wpedantic -Wextra -g
#CFLAGS+=-fsanitize=bounds
RM = rm -f

EXNAME = static_error

all : ${EXNAME}

% : %.c
	${CC} ${CFLAGS} $< -o $@

clean :
	${RM} ${EXNAME}

.PHONY : clean all
