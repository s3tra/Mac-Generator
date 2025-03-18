CXX = g++
CXXFLAGS = -Wall -std=c++11

TARGET = mac-generator

SRC = main.cpp

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
