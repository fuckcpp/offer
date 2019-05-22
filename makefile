assignment:operator_assignment_1.o main.o
	g++ $^ -o $@ -std=c++11
operator_assignment_1.o:operator_assignment_1.cpp
	g++ $^ -c -std=c++11
main.o:main.cpp
	g++ $^ -c -std=c++11
