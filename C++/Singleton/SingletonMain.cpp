#include "Singleton.h"
#include <iostream> 
using namespace std; 

int main(int argc,char* argv[]) 
{ 
    Singleton* sgn = Singleton::Instance();
    Singleton * sgn1 = Singleton::Instance();
    printf("sgn is %p,sgn1 is %p\n",sgn,sgn1);
    sgn->deleteInstance();
    sgn1->deleteInstance();
    return 0; 
}
