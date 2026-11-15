#ifndef CAR_H
#define CAR_H

#include <string>

class Car
{
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    void printData() const;
    void setBrand(const std::string &brand);
    void setModel(const std::string &model);
    void setYearModel(int yearModel);
};

#endif // CAR_H