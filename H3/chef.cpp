#include "chef.h"
#include <iostream>

Chef::Chef(const std::string &name)
{
    this->name = name;
    std::cout << "Chef " << name << " konstruktori" << std::endl;
}

Chef::~Chef()
{
    std::cout << "Chef " << name << " destruktori" << std::endl;
}

void Chef::makeSalad() const
{
    std::cout << "Chef " << name << " makes salad" << std::endl;
}

void Chef::makeSoup() const
{
    std::cout << "Chef " << name << " makes soup" << std::endl;
}