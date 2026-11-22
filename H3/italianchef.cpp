#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef(const std::string &name) : Chef(name)
{
    std::cout << "Italian Chef " << name << " konstruktori" << std::endl;
}

ItalianChef::~ItalianChef()
{
    std::cout << "Italian Chef " << name << " destruktori" << std::endl;
}

std::string ItalianChef::getName() const
{
    return name;
}

void ItalianChef::makePasta() const
{
    std::cout << "Italian Chef " << name << " makes pasta" << std::endl;
}