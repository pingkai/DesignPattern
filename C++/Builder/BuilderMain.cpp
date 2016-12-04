#include "Builder.h"
#include <iostream>



int main(int argc,char* argv[]) 
{
    Builder* builder = new ConcreteBuilder();
	Director* d = new Director(builder);
	d->Construct(1);
    cout <<endl;
    d->Construct(2);

    delete d;
    delete builder;
	return 0; 
}