.PHONY: dist clean
BIN=test
CXX=g++
CXXFLAGS=-Wall -pedantic -lgosu -g
TARBALL=test.tgz

$(BIN): game.o
	$(CXX) $(CXXFLAGS) game.o main.cc -o $(BIN)

game.o: game.cc
	$(CXX) $(CXXFLAGS) -c game.cc -o $@

clean:
	rm -f *.o $(TARBALL) $(BIN)

dist:
	tar cvzf $(TARBALL) data *.cc *.h makefile
