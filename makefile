CPPFLAGS += -std=c++11 -W -Wall -g -Wno-unused-parameter
CPPFLAGS += -I include

bin/matrix_solver : test/matrix_solver.cpp
	mkdir -p bin
	g++ -I lib/eigen test/matrix_solver.cpp -o bin/matrix_solver 

clean :
	rm bin/*