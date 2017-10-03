# Specifiy the target
all:	Donate

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
Donate:	Baule_Evan_ebaule1_Donate.o Donor.o DonorDatabase.o
	g++  Baule_Evan_ebaule1_Donate.o Donor.o DonorDatabase.o -o Baule_Evan_ebaule1_Donate.exe
	

# Specify how the object files should be created from source files
Donate.o: Baule_Evan_ebaule1_Donate.cpp Donor.cpp DonorDatabase.cpp
	g++ -c -Wall Donor.cpp
	g++ -c -Wall DonorDatabase.cpp
	g++ -c -Wall Baule_Evan_ebaule1_Donate.cpp
	

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o Baule_Evan_ebaule1_Donate.exe 
