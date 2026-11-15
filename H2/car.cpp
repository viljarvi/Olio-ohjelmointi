#include "car.h"
#include <iostream>

void Car::printData() const
{
    std::cout << "Merkki: " << brand << std::endl;
    std::cout << "Malli: " << model << std::endl;
    std::cout << "Valmistusvuosi: " << yearModel << std::endl;
}

void Car::setBrand(const std::string &brand)
{
    this->brand = brand;
}

void Car::setModel(const std::string &model)
{
    this->model = model;
}

void Car::setYearModel(int yearModel)
{
    this->yearModel = yearModel;
}