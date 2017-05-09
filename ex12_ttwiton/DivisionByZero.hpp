#include "exercise12.hpp"

#ifndef DIVISIONBYZERO_H
#define DIVISIONBYZERO_H

class DivisionByZero {
    private:
        string msg;
    public:
        DivisionByZero(string msg);

        string getMsg() const;
};

#endif