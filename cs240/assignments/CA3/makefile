#Evan M. Baule
#CS240 - Data Structures & Algorithms
#Coding Assignment CA3.2
all:	link_all

#Links *.o into driver executable
link_all: comp_all Driver.o Driver.o FBLUser.o FBLUserLL.o FBLPost.o FBLPostLL.o FBLCommentLL.o
	g++  Driver.o FBLUser.o FBLUserLL.o FBLPost.o FBLPostLL.o FBLCommentLL.o -o Driver
	

#Compiles src files into object in build/*.o
comp_all: Driver.cpp FBLUser.cpp FBLPost.cpp FBLPostLL.cpp FBLUserLL.cpp FBLCommentLL.cpp
	g++ -c -Wall Driver.cpp -o Driver.o
	g++ -c -Wall FBLUser.cpp -o FBLUser.o
	g++ -c -Wall FBLUserLL.cpp -o FBLUserLL.o
	g++ -c -Wall FBLPost.cpp -o FBLPost.o
	g++ -c -Wall FBLPostLL.cpp -o FBLPostLL.o
	g++ -c -Wall FBLCommentLL.cpp -o FBLCommentLL.o
	
#Removes object files build/*.o and executable bin/drive(.exe), build afterwards to replace those files
clean:
	rm -f *.o Driver

#Runs the bin/drive(.exe) executable
run:
	./Driver

#Cat | input files to check cases
test:
	cat test.txt | ./Driver

test2:
	cat test2.txt | ./Driver
