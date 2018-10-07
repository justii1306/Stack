teststack: teststack.o stack.o
	g++ -g -Wall $^ -o $@

stack.o: stack.c stack.h
	g++ -g -c -Wall $< -o $@

teststack.o: teststack.c stack.h
	g++ -g -c -Wall $< -o $@

.PHONY: clean

clean:
	-rm stack.o teststack.o teststack
