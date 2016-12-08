#ifndef _DECORATOR_H_
#define  _DECORATOR_H_
#include <iostream>
using namespace std;

class Ingredient {
public:
	virtual ~Ingredient();
    virtual string getDescription() = 0;
    virtual double getCost() = 0;
    void printDescription();

protected: 
	Ingredient();
};

class Bread : public Ingredient
{ 
public: 
	Bread(string desc);
	~Bread();
	string getDescription();
    double getCost();

private:
    string mDescription;
};

class Decorator :public Ingredient
{
public: 
	Decorator(Ingredient* ing);
	virtual ~Decorator();
    virtual string getDescription();
    virtual double getCost();
protected: 
	Ingredient* mIngredient;
};

class Pork :public Decorator
{
public: 
	Pork(Ingredient* igd);
	~Pork();
	string getDescription();
    double getCost();
};

class Mutton :public Decorator 
{
public: 
	Mutton(Ingredient* igd);
	~Mutton();
	string getDescription();
    double getCost();
};

#endif