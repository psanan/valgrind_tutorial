FC = gfortran
FFLAGS = -O0 -Wall -Wpedantic -Wextra -g
FFLAGS += -fcheck=all 
RM = rm -f

EXNAME = hello

all : ${EXNAME}

% : %.f90
	${FC} ${FFLAGS} $< -o $@

clean :
	${RM} ${EXNAME}

.PHONY : clean
