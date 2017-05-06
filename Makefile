CXX=g++
CXXFLAGS=-Wall -Wextra -MMD -std=c++11
LIBS=

CPP_FILES:= $(wildcard src/*.cpp)
OBJ_FILES:= $(addprefix obj/,$(notdir $(CPP_FILES:.cpp=.o)))

prefix=/usr/local
INCDIRS= -I$(prefix)/include -I./src
LIBDIRS= 

all: main.m.cpp $(OBJ_FILES)
	$(CXX) -o stochgrad.tsk $(CXXFLAGS) $(LIBDIRS) $(INCDIRS) $^ $(LIBS)

obj/%.o: src/%.cpp
	    $(CXX) $(CXXFLAGS) $(INCDIRS)  -o $@ -c $<

clean:
	    $(RM) stochgrad.tsk stochgrad.o stochgrad.d obj/*.o obj/*.d d

-include $(OBJFILES:.o=.d)
