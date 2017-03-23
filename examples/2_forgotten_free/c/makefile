CC = gcc
CFLAGS = -Wall -Wpedantic -Wextra -g
RM = rm -f

EXNAME = forgotten_free

all : ${EXNAME}

% : %.c
	${CC} ${CFLAGS} $< -o $@

clean :
	${RM} ${EXNAME}

.PHONY : clean all
