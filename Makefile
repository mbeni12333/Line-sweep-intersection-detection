.PHONY: clean

SRCS=$(wildcard src/*.cpp)
OBJS=$(SRCS:%.cpp=$(DEST)/%.o)
DEPS=$(SRCS:%.cpp=$(DEST)/%.d)

CXX=g++
CXXFLAGS=-g -Wall -Wextra
INCFLAGS = -Iinclude/

LIBS = 
DEST=bin
COMPILE= $(CXX) $(CXXFLAGS) $(INCFLAGS) 
TARGET=app

all: dirs app	

app: $(OBJS)
	$(COMPILE) $^ -o $(DEST)/$@ $(LIBS)

-include $(DEPS)

$(DEST)/%.o: %.cpp Makefile
	$(CXX) $(CXXFLAGS) $(INCFLAGS)  -MMD -MP -c $^ -o $@
	
dirs:
	mkdir -p $(DEST)

clean:
	rm -rf $(DEST)
