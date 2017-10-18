#Evan M. Baule
#CS240 - Data Structures & Algorithms
#Coding Assignment CA3.2
all:	link_all

#Links build/*.o into bin/driver executable
link_all: comp_all build/Driver.o build/Driver.o build/FBLUser.o build/FBLUserLL.o build/FBLPost.o build/FBLPostLL.o
	g++  build/Driver.o build/FBLUser.o build/FBLUserLL.o build/FBLPost.o build/FBLPostLL.o -o bin/drive
	

#Compiles src files into object in build/*.o
comp_all: src/Driver.cpp src/FBLUser.cpp src/FBLPost.cpp src/FBLPostLL.cpp src/FBLUserLL.cpp
	g++ -c -Wall src/Driver.cpp -o build/Driver.o
	g++ -c -Wall src/FBLUser.cpp -o build/FBLUser.o
	g++ -c -Wall src/FBLUserLL.cpp -o build/FBLUserLL.o
	g++ -c -Wall src/FBLPost.cpp -o build/FBLPost.o
	g++ -c -Wall src/FBLPostLL.cpp -o build/FBLPostLL.o
	
#Removes object files build/*.o and executable bin/drive(.exe), build afterwards to replace those files
clean:
	rm -f build/*.o bin/drive

#Runs the bin/drive(.exe) executable
run:
	./bin/drive

#Cat | input files to check cases
test:
	cat tests/test.txt | bin/drive

#Reformat file structure, copy, and compress files for submission
submit: