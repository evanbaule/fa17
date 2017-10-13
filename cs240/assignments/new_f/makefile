# Specifiy the target
all:	link_all

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
link_all: comp_all build/Driver.o build/TestClass.o
	g++  build/Driver.o build/TestClass.o -o bin/run
	

# Specify how the object files should be created from source files
comp_all: src/Driver.cpp src/TestClass.cpp
	g++ -c -Wall src/Driver.cpp -o build/Driver.o
	g++ -c -Wall src/TestClass.cpp -o build/TestClass.o
	

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f build/*.o bin/run 