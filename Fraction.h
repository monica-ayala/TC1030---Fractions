#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
#include <numeric>
#include <iostream>
using namespace std; 

class Fraction{
  private:
    int numerator;
    int denominator;
  public:
    Fraction();
		Fraction(int num, int den);
    string formatVersion();
    int getNumerator();
    int getDenominator();
    Fraction operator+(const Fraction& val);
    Fraction operator-(const Fraction& val);
    Fraction operator*(const Fraction& val);
    Fraction operator/(const Fraction& val);
    bool operator<(const Fraction& val);
    bool operator>(const Fraction& val);
    bool operator==(const Fraction& val);
    string addSpaces(int spaces);
    float floatVersion();
};

#endif