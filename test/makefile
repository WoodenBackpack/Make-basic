SRC = $(wildcard src/*.cpp)
INC = -Iinclude/
LIB_DIR = lib/
LIBS_FILES = $(wildcard $(LIB_DIR)*.a)
LIBS = $(subst lib/lib,,$(LIBS_FILES))
LIB = $(subst .a,,$(LIBS))
STD_LIB = -lstdlib
MAIN = main.cpp
TARGET = tests

CC = g++
C_FLAGS = -pthread -std=c++14

tests:
	@echo $(LIBS_FILES)
	$(CC) $(MAIN) $(SRC) $(INC) -L$(LIB_DIR) $(LIBS_FILES) $(C_FLAGS) -o $(TARGET)

clean:
	if [ -e $(TARGET) ]; then rm $(TARGET); fi
