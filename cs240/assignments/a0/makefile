#
# Specifiy the target
all:	Baule_Evan_ebaule1_Hello

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
Hello:	Baule_Evan_ebaule1_Hello.o
	g++  Baule_Evan_ebaule1_Hello.o  -o Baule_Evan_ebaule1_Hello.exe

# Specify how the object files should be created from source files
Hello.o:	Baule_Evan_ebaule1_Hello.cpp
	g++ -c Baule_Evan_ebaule1_Hello.cpp

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o Baule_Evan_ebaule1_Hello.exe

