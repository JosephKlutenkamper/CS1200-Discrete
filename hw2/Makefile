CXX = g++
#CXX = mpicxx
CXXFLAGS = -Wall -W -s -O3 -std=c++11
LIBRARIES = -lpthread -lgmpxx -lgmp
.PHONY: default run
default: run

run:
	${CXX} ${CXXFLAGS} *.cpp ${LIBRARIES} -o program 
	
clean:
	rm -f *.o program
