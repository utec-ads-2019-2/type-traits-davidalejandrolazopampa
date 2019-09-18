#include <iostream>

#include "test/tester.h"

using namespace std;

int main(int argc, char const *argv[]) {
    string cato = "Tanta johan";
    Tester::execute();
    cout<<"--------------------Funca----------------Salio-----------"<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    cout<<"Trabajo colaborativo companero "+cato+"---------------------"<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    SelfList<int> list(SelfList<int>::Move);
    return EXIT_SUCCESS;
}

