CC = gcc
CFLAGS = -Wall -Wpedantic -Wextra -g
RM = rm -f

EXNAME = hello

all : ${EXNAME}

% : %.c
	${CC} ${CFLAGS} $< -o $@

clean :
	${RM} ${EXNAME}

.PHONY : clean all
