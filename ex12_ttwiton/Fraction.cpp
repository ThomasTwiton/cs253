#include "Fraction.hpp"
#include "DivisionByZero.hpp"

Fraction::Fraction(int n, int d) : numer(n), denom(d) {
    if (denom==0){
        throw DivisionByZero("Error: Zero cannot be the value of the denominator");
        }
    }

int Fraction::getNumerator(){return numer;}
int Fraction::getDenominator(){return denom;}
void Fraction::setNumerator(int n){numer=n;}
void Fraction::setDenominator(int d){denom=d;}

int calcGCD(int a, int b){
    if (b==0){
        return a;
    } else{
        return calcGCD(b, a % b);
    }
}

Fraction gcd(Fraction& f){
   int a=f.getNumerator();
   int b=f.getDenominator();
   int divisor=calcGCD(a,b);
   return Fraction(a/divisor, b/divisor);
}

ostream& operator<<(ostream& os, const Fraction& f){
    os<<f.numer<<"/"<<f.denom;
    return os;
}

Fraction operator+(const Fraction& lh, const Fraction& rh){
    int new_numer=lh.numer*rh.denom + rh.numer*lh.denom;
    int new_denom=lh.denom * rh.denom;
    Fraction f= Fraction(new_numer, new_denom);
    f=gcd(f);
    return f;
}

Fraction operator-(const Fraction& lh, const Fraction& rh){
    int new_numer=lh.numer*rh.denom - rh.numer*lh.denom;
    int new_denom=lh.denom * rh.denom;
    Fraction f= Fraction(new_numer, new_denom);
    f=gcd(f);
    return f;
}

Fraction operator*(const Fraction& lh, const Fraction& rh){
    int new_numer=lh.numer* rh.numer;
    int new_denom=lh.denom * rh.denom;
    Fraction f= Fraction(new_numer, new_denom);
    f=gcd(f);
    return f;
}

Fraction operator/(const Fraction& lh, const Fraction& rh){
    int new_numer=lh.numer* rh.denom;
    int new_denom=lh.denom * rh.numer;
    Fraction f= Fraction(new_numer, new_denom);
    f=gcd(f);
    return f;
}

bool operator<(const Fraction& lh, const Fraction& rh){
    return (lh.numer*rh.denom) < (lh.denom*rh.numer);
}

bool operator>(const Fraction& lh, const Fraction& rh){
    return (lh.numer*rh.denom) > (lh.denom*rh.numer);
}

bool operator==(const Fraction& lh, const Fraction& rh){
    return (lh.numer*rh.denom) == (lh.denom*rh.numer);
}

bool operator!=(const Fraction& lh, const Fraction& rh){
    return (lh.numer*rh.denom) != (lh.denom*rh.numer);
}

