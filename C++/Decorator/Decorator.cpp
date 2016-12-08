#include "Decorator.h"
#include <iostream>

using namespace std;

Ingredient::Ingredient() {

}

Ingredient::~Ingredient() {

}

void Ingredient::printDescription() {
    std::cout << "Name: " + getDescription() << std::endl;
    std::cout << "Price:" << getCost()<< std::endl << endl;
}

Bread::Bread(string desc) {
    mDescription = desc;
}

Bread::~Bread() {

}

string Bread::getDescription() { 
	return mDescription;
}

double Bread::getCost(){
    return 2.48;
}

Decorator::Decorator(Ingredient* ing) { 
	mIngredient = ing;
}

double Decorator::getCost(){
    return mIngredient->getCost();
}
string Decorator::getDescription(){
    return mIngredient->getDescription();
}

Decorator::~Decorator() { 
	delete mIngredient; 
}

Pork::Pork(Ingredient*igd) :Decorator(igd) {

}

Pork::~Pork() {

}

string Pork::getDescription(){ 
	string base = mIngredient->getDescription();
    return base +"\n" + "\t" +"Decrocated with Pork! ";
} 

double Pork::getCost(){
    double basePrice = mIngredient->getCost();
    double porkPrice = 1.8;

return basePrice + porkPrice ;
}

Mutton::Mutton(Ingredient*igd) :Decorator(igd) {

}

Mutton::~Mutton() {

}

string Mutton::getDescription(){ 
	string base = mIngredient->getDescription();
    return base +"\n"+ "\t" +"Decrocated with Mutton! ";
} 

double Mutton::getCost(){
    double basePrice = mIngredient->getCost();
    double MuttonPrice = 2.8;

return basePrice + MuttonPrice ;
}