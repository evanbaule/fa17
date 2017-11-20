#Evan M. Baule
#CS240 - Data Structures & Algorithms
#Coding Assignment CA3.2
all:	link_all

#Links *.o into driver executable
link_all: comp_all Driver.o Dish.o
	g++  Dish.o Driver.o -o Driver

#Compiles src files into object in build/*.o
comp_all: Driver.cpp Dish.cpp
	g++ -c -Wall Driver.cpp -o Driver.o
	g++ -c -Wall Dish.cpp -o Dish.o
	
	
#Removes object files build/*.o and executable bin/drive(.exe), build afterwards to replace those files
clean:
	rm -f *.o Driver

#Runs the bin/drive(.exe) executable
run:
	./Driver

