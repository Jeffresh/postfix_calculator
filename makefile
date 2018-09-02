CXX = clang++
OBJS =  postfix_calculator.o tests.o

all: main

main: $(OBJS)
	$(CXX) $(OBJS)  -o testpostfix

clean:
	$(RM) main $(OBJS) core *~

