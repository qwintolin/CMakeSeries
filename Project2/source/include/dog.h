
#define DOG_H

#include<iostream>
#include<string>
using namespace std;
 class Dog{
    public:
        explicit Dog(string name_param);
        Dog() = default;
        ~Dog();

        string get_name() const{
            return dog_name;
        }

        void set_dog_name(const string &name){
            dog_name = name;
        }

        void print_info(){
            cout<<"Dog [name : "<<dog_name<<"]"<<endl;
        }

    private:
        string dog_name {"Puffy"};
 };