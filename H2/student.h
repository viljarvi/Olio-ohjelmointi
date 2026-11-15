#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
private:
    std::string name;
    int studentNumber;
    double average;

public:
    void setName(const std::string &name);
    void setStudentNumber(int studentNumber);
    void setAverage(double average);

    std::string getName() const;
    int getStudentNumber() const;
    double getAverage() const;
};

#endif