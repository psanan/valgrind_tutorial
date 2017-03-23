FC = gfortran
FFLAGS = -O0 -Wall -Wpedantic -Wextra -g
FFLAGS += -fcheck=all 
RM = rm -f

EXNAMES = uninitialized_value

all : ${EXNAMES}

% : %.f90
	${FC} ${FFLAGS} $< -o $@

clean :
	${RM} ${EXNAMES}

.PHONY : clean
