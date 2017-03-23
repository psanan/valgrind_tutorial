FC = gfortran
FFLAGS = -O0 -Wall -Wpedantic -Wextra -g
FFLAGS += -fcheck=all 
RM = rm -f

EXNAMES = forgotten_free forgotten_free_2

all : ${EXNAMES}

% : %.f90
	${FC} ${FFLAGS} $< -o $@

clean :
	${RM} ${EXNAMES}

.PHONY : clean
