SOURCES := $(wildcard *.cpp)
CXX := g++
CXXFLAGS := -Wall
OBJ := $(SOURCES:.cpp=.o)
TARGET := main.out

$(TARGET) : $(OBJ)
	$(CXX) $(CXXFLAG) -o $@ $^

%.d : %.cpp
	set -e; rm -f $@; \
	$(CXX) -MM $(CXXFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ : ]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

-include $(SOURCES:.cpp=.d) 

.PHONY : clean
	
clean : clean.d clean.out clean.o

.PHONY : clean.d

clean.d : 
	-rm -f *.d

.PHONY : clean.out

clean.out : 
	-rm -f *.out

.PHONY : clean.o
clean.o : 
	-rm -f *.o

.PHONY : run

run : main.out
	./main.out
