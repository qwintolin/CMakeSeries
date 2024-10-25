// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include "dog.h"
#include "operation.h"
#include "log.h"

using namespace std;

int main()

{
    double result = add(2,70);
    cout<<"result : "<<result <<endl;

    Dog dog1("Flitzy");
    dog1.print_info();

    log_data("Hello ",LogType::FATAL_ERROR);

    return 0;
}
