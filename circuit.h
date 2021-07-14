#pragma once
#include <string>
#include <vector>

class Component 
{
public:
    std::string get_name();
    void set_name(std::string in);    
private:
    std::string name;
    std::vector<int> nodes;
};

