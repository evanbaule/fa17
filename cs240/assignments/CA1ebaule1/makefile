# Specifiy the target
all:	Donate

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
Donate:	Donate.o
	g++  Baule_Evan_ebaule1_Donate.o Donor.o -o Baule_Evan_ebaule1_Donate.exe
	

# Specify how the object files should be created from source files
Donate.o: Baule_Evan_ebaule1_Donate.cpp
	g++ -c Donor.cpp
	g++ -c Baule_Evan_ebaule1_Donate.cpp
	

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o Donate.exe 
