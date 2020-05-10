HEADDIR=./headers
SOURCEDIR=./sources
OBJ=./objects
default:all

all:
	g++ -c $(SOURCEDIR)/* -I $(HEADDIR);
	mv ./*.o $(OBJ);
	g++ $(OBJ)/* -o StudentEntryManipulationProgram;
