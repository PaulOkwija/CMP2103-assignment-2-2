all: a.out b.out

a.out:
	g++ -std=c++11 Tests/test.cpp

b.out:
	g++ -std=c++11 Tests/test2.cpp

test: a.out
	./a.out
	
test: b.out
	./b.out

clean:
	rm a.out b.out
