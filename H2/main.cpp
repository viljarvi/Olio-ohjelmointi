#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

int main()
{
    // Car-olio pinomuistiin: syntyy ja tuhoutuu automaattisesti
    Car car;
    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(2020);
    std::cout << "-- Car --" << std::endl;
    car.printData();

    // Rectangle-olio kekomuistiin: vaatii eksplisiittisen delete-kutsun
    Rectangle *rect = new Rectangle;
    rect->setWidth(4.5);
    rect->setHeight(2.0);
    std::cout << "-- Rectangle --" << std::endl;
    std::cout << "Pinta-ala: " << rect->getArea() << std::endl;
    std::cout << "Ymparysmitta: " << rect->getCircum() << std::endl;
    delete rect;

    // Student-olio smart pointerilla: vapautuu automaattisesti
    std::unique_ptr<Student> student = std::make_unique<Student>();
    student->setName("Ville Jarvinen");
    student->setStudentNumber(1234567);
    student->setAverage(4.25);
    std::cout << "-- Student --" << std::endl;
    std::cout << "Nimi: " << student->getName() << std::endl;
    std::cout << "Opiskelijanumero: " << student->getStudentNumber() << std::endl;
    std::cout << "Keskiarvo: " << student->getAverage() << std::endl;

    return 0;
}