# Specifiy the target
all:	link_all

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
link_all: comp_all Driver.o FBLUser.o FBLPost.o FBLUserLL.o FBLPostLL.o
	g++  Driver.o FBLUser.o FBLPost.o FBLUserLL.o FBLPostLL.o -o Driver.exe
	

# Specify how the object files should be created from source files
comp_all: Driver.cpp FBLUser.cpp FBLPost.cpp FBLPostLL.cpp FBLUserLL.cpp
	g++ -c -Wall Driver.cpp
	g++ -c -Wall FBLPost.cpp
	g++ -c -Wall FBLUser.cpp
	g++ -c -Wall FBLPostLL.cpp
	g++ -c -Wall FBLUserLL.cpp
	

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o Driver.exe 
