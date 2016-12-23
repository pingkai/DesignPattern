#include "State.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
	State* st = new ConcreteStateA();
	Context* con = new Context();
    con->setState(st);

    con->OprationInterface();

    delete st;
    st = new ConcreteStateB();
    con->setState(st);
    con->OprationInterface();

	delete con;
	delete st;
	return 0;
}