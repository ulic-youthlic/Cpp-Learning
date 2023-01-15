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
	sed -E 's/($*)\.o[ : ]*/\1.o $@ : /g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

-include $(SOURCES:.cpp=.d) 

.PHONY : clean
	
clean : clean_d clean_out clean_o

.PHONY : clean_d

clean_d : 
	-rm -f *.d

.PHONY : clean_out

clean_out : 
	-rm -f *.out

.PHONY : clean_o
clean_o : 
	-rm -f *.o

.PHONY : run

run : $(TARGET) 
	./main.out
