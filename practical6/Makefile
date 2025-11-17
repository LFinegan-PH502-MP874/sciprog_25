# Compiler
CC = gcc

# Compiler flags:

# Name of the final executable
TARGET = matmult

# List of .c source files in the project
SRCS = main.c matmult.c

# Default rule: build the executable
all: $(TARGET)

# Compile and link all source files into the executable
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

# "make clean" removes the generated executable
clean:
	rm -f $(TARGET)

