IMPL_DIR := src
HEADER_DIR := include
BIN_DIR := bin

output: main.o filemanager.o
	g++ -std=c++0x -Wall main.o filemanager.o -o $(BIN_DIR)/login

main.o: main.cpp
	g++ -c main.cpp

filemanager.o: $(HEADER_DIR)/CFileManager.hpp $(IMPL_DIR)/CFileManager.cpp
	g++ -c CFileManager.cpp 

$(BIN_DIR):
	mkdir -p $@