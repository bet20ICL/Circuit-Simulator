#include "circuit.h"

std::string Component::get_name(){
    return name;
}

void Component::set_name(std::string in){
    name = in;
}