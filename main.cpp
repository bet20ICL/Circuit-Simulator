#include <iostream>
#include <circuit.h>

int main(){
    std::cout<<"Hello World"<<std::endl;
    std::cout<<"Goodbye World"<<std::endl;
    Component Resistor;
    Resistor.set_name("R1");
    std::cout<<Resistor.get_name()<<std::endl;
}