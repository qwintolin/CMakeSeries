#include "dog.h"
#include<iostream>
using namespace std;

Dog::Dog(string name_param) : dog_name(name_param)
{
    cout<< "Constructor for dog "<<dog_name<<" called."<<endl;
}

Dog::~Dog()
{
    cout<<"Destructor for dog "<<dog_name<<" called."<<endl;
}