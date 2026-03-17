#ifndef RATIONAL_H
#define RATIONAL_H

#include <istream>
#include <ostream>

class Rational {
public:
  Rational (int numerator = 0, int denominator = 1);
  void write (std::ostream& rcOut) const;
  bool read (std::istream& rcIn);
  Rational add (const Rational& rcRational) const;
  Rational multiply (const Rational& rcRational) const;
  bool isEqual (const Rational& rcRational) const;

private:
  int mNumerator;
  int mDenominator;
};

#endif