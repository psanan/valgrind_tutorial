FC = gfortran
FFLAGS = -O0 -Wall -Wpedantic -Wextra -g
FFLAGS += -fcheck=all 
RM = rm -f

EXNAMES = static_error

all : ${EXNAMES}

% : %.f90
	${FC} ${FFLAGS} $< -o $@

clean :
	${RM} ${EXNAMES}

.PHONY : clean
