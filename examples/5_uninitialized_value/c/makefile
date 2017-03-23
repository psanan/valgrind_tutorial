CC = gcc
CFLAGS = -Wall -Wpedantic -Wextra -g
RM = rm -f

EXNAME = uninitialized_value

all : ${EXNAME}

% : %.c
	${CC} ${CFLAGS} $< -o $@

clean :
	${RM} ${EXNAME}

.PHONY : clean all
