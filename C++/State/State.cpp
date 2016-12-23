#include "State.h" 
#include <iostream> 

using namespace std;

State::State() {

}

State::~State() {

}

void State::OperationInterface(Context* con) {
	cout <<con << ' '<<mDes;
}

ConcreteStateA::ConcreteStateA() {
    mDes = "waking";
}

ConcreteStateA::~ConcreteStateA() {

}

ConcreteStateB::ConcreteStateB() {
    mDes = "sleeping";

}

ConcreteStateB::~ConcreteStateB(){

}

Context::Context() {
}
Context::~Context() {
}
void Context::setState(State* state){
    _state = state;
}
void Context::OprationInterface() {
    cout<< "I'm ";
	_state->OperationInterface(this);
    cout << "." << endl;
}