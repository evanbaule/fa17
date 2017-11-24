#Evan M. Baule
#Binghamton University
#CS240 - Data Structures & Algorithms
#Coding Assignment CA4
all:	link_all

#Links *.o into driver executable 
link_all: comp_all Driver.o Dish.o Heap.o Wrapper.o
	g++ Heap.o Wrapper.o Dish.o Driver.o -o Driver

#Compiles src files into object in build/*.o
comp_all: Driver.cpp Dish.cpp Heap.cpp Wrapper.cpp
	g++ -c -Wall Driver.cpp -o Driver.o
	g++ -c -Wall Dish.cpp -o Dish.o
	g++ -c -Wall Heap.cpp -o Heap.o
	g++ -c -Wall Wrapper.cpp -o Wrapper.o
	
	
#Removes object files build/*.o and executable bin/drive(.exe), build afterwards to replace those files
clean:
	rm -f *.o Driver

#Runs the bin/drive(.exe) executable
run:
	./Driver

