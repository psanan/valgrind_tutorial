FC = gfortran
FFLAGS = -Wall -Wpedantic -Wextra -g
RM = rm -f

EXNAME = hello

all : ${EXNAME}

% : %.f90
	${FC} ${FFLAGS} $< -o $@

clean :
	${RM} ${EXNAME}

.PHONY : clean
