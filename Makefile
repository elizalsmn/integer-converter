FUNC= g++ -pedantic-errors -std=c++11
d2boh.o: d2boh.cpp d2boh.h
	$(FUNC) -c d2boh.cpp
main3.o: main3.cpp d2boh.h d2boh.cpp
	$(FUNC) -c main3.cpp
main3: main3.o d2boh.o
	g++ $^ -o main3
clean:
	rm -f main3 main3.o d2boh.o
.PHONY: clean
