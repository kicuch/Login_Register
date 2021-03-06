#folders
IMPL_DIR := src
HEADER_DIR := include
BIN_DIR := bin

#flags
CCFLAGS := -Wall -Wextra -pedantic -std=c++17
IINCLUDE := -I$(HEADER_DIR)

#output
output: main.o CFileManager.o CMenu.o
	g++ $(CCFLAGS) $(IINCLUDE) main.o CFileManager.o CMenu.o -o $(BIN_DIR)/login

#main
main.o: main.cpp | $(BIN_DIR)
	g++ $(IINCLUDE) -c main.cpp

#fileManager
CFileManager.o: $(HEADER_DIR)/CFileManager.hpp $(IMPL_DIR)/CFileManager.cpp
	g++ $(IINCLUDE) -c $(IMPL_DIR)/CFileManager.cpp 

#CMenu
CMenu.o: $(HEADER_DIR)/CMenu.hpp $(IMPL_DIR)/CMenu.cpp
	g++ $(IINCLUDE) -c $(IMPL_DIR)/CMenu.cpp 

#create bin folder
$(BIN_DIR):
	mkdir -p $@

#make clean
.PHONY: clean

clean:
	$(RM) *.o