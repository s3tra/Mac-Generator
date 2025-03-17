# Compiler and linker options
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Target executable
TARGET = mac-generator

# Source files
SRC = main.cpp

# Build the target
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Clean up build files
clean:
	rm -f $(TARGET)
