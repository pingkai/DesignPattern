#ifndef _COMMAND_H_
#define _COMMAND_H_
#include <vector>
using namespace std;

class Reciever {
public: 
	Reciever();
	~Reciever();
	void Action();
};

class Command {
public: 
	virtual ~Command();
	virtual void Excute() = 0;
protected: 
	Command();
};

class ConcreteCommand :public Command {
public: 
	ConcreteCommand(Reciever* rev);
	~ConcreteCommand();
	void Excute();
private: 
	Reciever* _rev;
};


class ConcreteCommand1 :public Command {
public: 
	ConcreteCommand1(Reciever* rev);
	~ConcreteCommand1();
	void Excute();
private: 
	Reciever* _rev;
};


class Invoker {
public: 
	Invoker();
	~Invoker();
    void add(Command* cmd);
	void Invoke();
private: 
	vector<Command*> _cmds;
};
#endif
