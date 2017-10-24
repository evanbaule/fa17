#Evan M. Baule
#CS240 - Data Structures & Algorithms
#Coding Assignment CA3.2
all:	link_all

#Links *.o into driver executable
link_all: comp_all Driver.o Driver.o FBLUser.o FBLUserLL.o FBLPost.o FBLPostLL.o
	g++  Driver.o FBLUser.o FBLUserLL.o FBLPost.o FBLPostLL.o -o CA3
	

#Compiles src files into object in build/*.o
comp_all: Driver.cpp FBLUser.cpp FBLPost.cpp FBLPostLL.cpp FBLUserLL.cpp
	g++ -c -Wall Driver.cpp -o Driver.o
	g++ -c -Wall FBLUser.cpp -o FBLUser.o
	g++ -c -Wall FBLUserLL.cpp -o FBLUserLL.o
	g++ -c -Wall FBLPost.cpp -o FBLPost.o
	g++ -c -Wall FBLPostLL.cpp -o FBLPostLL.o
	
#Removes object files build/*.o and executable bin/drive(.exe), build afterwards to replace those files
clean:
	rm -f *.o CA3

#Runs the bin/drive(.exe) executable
run:
	./CA3

#Cat | input files to check cases
test:
	cat test.txt | ./CA3

test2:
	cat test2.txt | ./CA3

#Reformat file structure, copy, and compress files for submission
submit: