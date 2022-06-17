#folders
IMPL_DIR := src
HEADER_DIR := include
BIN_DIR := bin
#flags
CCFLAGS := -std=c++0x -Wall
IINCLUDE := -I$(HEADER_DIR)

#output
output: main.o CFileManager.o
	g++ $(CCFLAGS) $(IINCLUDE) main.o CFileManager.o -o $(BIN_DIR)/login

#main
main.o: main.cpp | $(BIN_DIR)
	g++ $(IINCLUDE) -c main.cpp

#fileManager
CFileManager.o: $(HEADER_DIR)/CFileManager.hpp $(IMPL_DIR)/CFileManager.cpp
	g++ $(IINCLUDE) -c $(IMPL_DIR)/CFileManager.cpp 

#create bin folder
$(BIN_DIR):
	mkdir -p $@

#make clean
.PHONY: clean

clean:
	$(RM) *.o