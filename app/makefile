SRC = $(wildcard src/*.cpp)

COMMON_DIR = /home/user/git-repos/make_tut/common
COMMON_LIB = common

COMPILER = gcc

BOOST_ROOT=/home/user/git-repos/boost/boost_1_69_0
INCLUDE = -Iinclude/ \
	  -I$(COMMON_DIR) \
          -I$(BOOST_ROOT)
CFLAGS = -std=c++14
TARGET = app
STD_LIB = stdc++


all:
	$(COMPILER) main.cpp $(CFLAGS) $(INCLUDE) -o $(TARGET) -L$(COMMON_DIR) -l$(COMMON_LIB) -Wl,-R$(COMMON_DIR) -l$(STD_LIB)

clean:
	if [ -f $(TARGET) ]; then rm $(TARGET); fi
	if [ -f out.txt ]; then rm out.txt; fi
