#pragma once

#include <iostream>
#include <fstream>

using namespace std;

class Rational {
  public:
    Rational (int numerator = 0, int denominator = 1);
    void write (ostream &rcOut) const;
    bool read (istream &rcIn);
    Rational add (Rational &rcRational) const;
    Rational multiply (Rational &rcRational) const;

  private:
    int mNumerator;
    int mDenominator;
};