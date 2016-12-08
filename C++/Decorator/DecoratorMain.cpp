#include "Decorator.h"
#include <iostream> 
using namespace std;

int main(int argc, char* argv[]) {

	Ingredient* compound = new Mutton( new Pork(new Bread("Mutton Prok Bread")));
    compound->printDescription();
	delete compound;

    compound = new Pork(new Bread("Prok Bread"));
    compound->printDescription();
	delete compound;
	return 0;
}