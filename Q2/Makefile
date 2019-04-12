CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17
OBJECTS = main.o MyVector.o
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp
MyVector.o: MyVector.h MyVector.cpp
	$(CXX) $(CXXFLAGS) MyVector.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
