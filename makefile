assignment:operator_assignment_1.o main.o
	g++ $^ -o $@ -std=c++11 -g
operator_assignment_1.o:operator_assignment_1.cpp
	g++ $^ -c -std=c++11 -g
main.o:main.cpp
	g++ $^ -c -std=c++11 -g
