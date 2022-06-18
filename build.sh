#!/bin/bash

GREEN=$'\e[0;32m'
NC=$'\e[0m'

# Timestamp function
timestamp() {
  date +"%T" # current time
}

echo "${GREEN}[$(timestamp)]Starting building binary...${NC}"
echo "${GREEN}[$(timestamp)]Removing .o objects...${NC}"
make clean
echo "${GREEN}[$(timestamp)]Compiling...${NC}"
make
echo "${GREEN}[$(timestamp)]Starting binary${NC}"
cd bin/
./login