CXXFLAGS=
CXXLIBS=

linux: main.o grid.o input.o
    @echo "Building"
    $(CXX) $(CXXFLAGS) -o 2DAdventurePP main.o grid.o input.o $(CXXLIBS)
    
clean:
    @echo "Cleaning up"
    rm *.o 2DAdventurePP
