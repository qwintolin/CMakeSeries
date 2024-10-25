#include "log.h"
#include <iostream>
using namespace std;

void log_data(const char* message, LogType lt){
    switch(lt)
    {
        case LogType::MESSAGE:
            cout<<"Message : "<<message <<endl;
            break;
        case LogType::WARNING:
            cout<<"Warning : "<<message<<endl;
        case LogType::FATAL_ERROR:
            cout<<"Fatal Error :"<<message<<endl;
            break;

        default:
            break;
    }
}