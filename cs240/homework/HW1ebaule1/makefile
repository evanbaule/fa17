#Evan M. Baule
#CS240 - Data Structures & Algorithms
#Coding Assignment CA3.2
all:	link_all

#Links *.o into driver executable
link_all: comp_all HW1-1.o HW1-2.o HW1-4.o
	g++  HW1-1.o -o HW1-1
	g++  HW1-2.o -o HW1-2
	g++  HW1-4.o -o HW1-4
	

#Compiles src files into object in build/*.o
comp_all: HW1-1.cpp HW1-2.cpp HW1-4.cpp
	g++ -c -Wall HW1-1.cpp -o HW1-1.o
	g++ -c -Wall HW1-2.cpp -o HW1-2.o
	g++ -c -Wall HW1-4.cpp -o HW1-4.o
	
	
#Removes object files build/*.o and executable bin/drive(.exe), build afterwards to replace those files
clean:
	rm -f *.o HW1-1 HW1-2 HW1-4



