#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(const std::string &name);
    ~ItalianChef();
    std::string getName() const;
    void makePasta() const;
};

#endif // ITALIANCHEF_H