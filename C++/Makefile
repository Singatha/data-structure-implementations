# the compiler: gcc for C program, define as g++ for C++
CC=g++

# compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
CPPFLAGS=-g -Wall

# The build target

all: $(TARGET)

$(TARGET): $(TARGET).cpp
			$(CC) $(CPPFLAGS) -o $(TARGET) $(TARGET).cpp

clean: $(TARGET)
			$(RM) $(TARGET)
