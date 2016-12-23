#include <iostream>
#include "Command.h"

Reciever::Reciever() {

}

Reciever::~Reciever() {

}

void Reciever::Action() {
	std::cout << "Reciever action.......";
}

Command::Command() {

}

Command::~Command() {

}

void Command::Excute() {

}

ConcreteCommand::ConcreteCommand(Reciever* rev) {
	this->_rev = rev;
}

ConcreteCommand::~ConcreteCommand() {
}

void ConcreteCommand::Excute() {
	_rev->Action();
	std::cout << "ConcreteCommand..." << std::endl;
}
ConcreteCommand1::ConcreteCommand1(Reciever* rev) {
	this->_rev = rev;
}

ConcreteCommand1::~ConcreteCommand1() {
}

void ConcreteCommand1::Excute() {
	_rev->Action();
	std::cout << "ConcreteCommand1..." << std::endl;
}

Invoker::Invoker() {
}

Invoker::~Invoker() {
	vector<Command*>::iterator comIter = _cmds.begin();
	for (; comIter != _cmds.end();) { 
		if (NULL != *comIter){
			delete *comIter;
			comIter = 
                _cmds.erase(comIter); // 删除元素，返回值指向已删除元素的下一个位置
		}else {
			++comIter;
		}
	} 
}

void Invoker::add(Command *cmd){
    _cmds.push_back(cmd);
}

void Invoker::Invoke() {
	vector<Command*>::iterator comIter = _cmds.begin();
	for (; comIter != _cmds.end(); comIter++) 	{ 
		(*comIter)->Excute();
	}
}
