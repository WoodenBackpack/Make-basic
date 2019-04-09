SRC = $(wildcard src/*.cpp)

COMMON_DIR = /home/user/git-repos/make_tut/common
COMMON_LIB = common

COMPILER = gcc
INCLUDE = -Iinclude/ \
	  -I$(COMMON_DIR)
CFLAGS = -std=c++14
TARGET = app
STD_LIB = stdc++

all:
	$(COMPILER) main.cpp $(CFLAGS) $(INCLUDE) -o $(TARGET) -L$(COMMON_DIR) -l$(COMMON_LIB) -Wl,-R$(COMMON_DIR) -l$(STD_LIB)

clean:
	if [ -f $(TARGET) ]; then rm $(TARGET); fi
	if [ -f out.txt ]; then rm out.txt; fi
