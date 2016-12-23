#ifndef _STATE_H_
#define _STATE_H_

#include <iostream>
using namespace std;

class Context;

class State {
public:
	State();
	virtual ~State();
	virtual void OperationInterface(Context*);
protected:
    string mDes;
};

class ConcreteStateA :public State {
public:
	ConcreteStateA();
	virtual ~ConcreteStateA();
//	virtual void OperationInterface(Context*);
};

class ConcreteStateB :public State {
public:
	ConcreteStateB();
	virtual ~ConcreteStateB();
//	virtual void OperationInterface(Context*);
};


class Context {
public:
	Context();
	~Context();
    void setState(State*);
	void OprationInterface();
private:
	friend class State; 
	State* _state;
};
#endif