#include "Composite.h"
#include <iostream> 
using namespace std;
int main(int argc, char* argv[]) {
	Leaf* l = new Leaf(0); 
	l->Operation();

    Composite* com = new Composite();
    com->Add(l);

    for (int i = 1; i < 10; i++){
        l = new Leaf(i);
	    com->Add(l);
    }
	com->Operation();

	Component* ll = com->GetChild(5);
	ll->Operation();

	delete com;
	
	return 0;
}