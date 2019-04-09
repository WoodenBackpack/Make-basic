COMPILER = gcc
LDFLAGS = -shared -fPIC
CFLAGS += -std=c++11
SRC = $(wildcard *.cc)
TARGET = libcommon.so
common:
	$(COMPILER) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)
clean:
	rm $(TARGET)
