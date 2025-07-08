CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -O2
TARGET = luna
SRCDIR = src
SOURCES = $(wildcard $(SRCDIR)/*.cpp) $(wildcard $(SRCDIR)/core/*.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	del /Q $(OBJECTS) $(TARGET).exe 2>nul || true

rebuild: clean all

run: $(TARGET)
	./$(TARGET)

.PHONY: all clean rebuild run 