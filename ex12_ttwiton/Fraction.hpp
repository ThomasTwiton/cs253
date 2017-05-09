#include "exercise12.hpp"
#include "DivisionByZero.hpp"

#ifndef FRACTION_H
#define FRACTION_H

class Fraction{
    private:
        int numer;
        int denom;
    public:
        Fraction(int, int);
        int getNumerator();
        int getDenominator();
        void setNumerator(int);
        void setDenominator(int);

        friend ostream& operator<<(ostream&, const Fraction&);

        friend Fraction operator+(const Fraction& lh, const Fraction& rh);
        friend Fraction operator-(const Fraction& lh, const Fraction& rh);
        friend Fraction operator*(const Fraction& lh, const Fraction& rh);
        friend Fraction operator/(const Fraction& lh, const Fraction& rh);

        friend bool operator<(const Fraction& lh, const Fraction& rh);
        friend bool operator>(const Fraction& lh, const Fraction& rh);
        friend bool operator==(const Fraction& lh, const Fraction& rh);
        friend bool operator!=(const Fraction& lh, const Fraction& rh);
};

#endif