CC = mpicc
CFLAGS = -O0 -Wall -Wpedantic -Wextra -g -std=c99
RM = rm -f

EXNAME = reduction

all : ${EXNAME}

% : %.c
	${CC} ${CFLAGS} $< -o $@

clean :
	${RM} ${EXNAME}

.PHONY : clean all
