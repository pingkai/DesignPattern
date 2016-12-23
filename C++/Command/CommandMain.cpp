#include "Command.h"
#include <iostream> 
using namespace std;
int main(int argc, char* argv[]) {
	Reciever* rev = new Reciever();
	Invoker* inv = new Invoker();

    Command* cmd = new ConcreteCommand1(rev);
    inv->add(cmd);
    cmd = new ConcreteCommand(rev);
    inv->add(cmd);

    cmd = new ConcreteCommand(rev);
    inv->add(cmd);

	inv->Invoke();
	
	delete inv;
    delete rev;

	return 0;
}