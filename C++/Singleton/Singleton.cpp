//Singleton.cpp
#include "Singleton.h"
#include <iostream> 
using namespace std;
Singleton* Singleton::_instance = NULL;
Singleton::Singleton()
{ 
    cout<<"Singleton...."<<endl;
}
Singleton::~Singleton()
{
    printf("%s\n",__func__);
}
Singleton* Singleton::Instance()
{ 
    if (_instance == NULL){
        _instance = new Singleton();
    }
    return _instance;
}
void Singleton::deleteInstance()
{
    if (_instance){
        delete _instance;
        _instance = NULL;
    }
}