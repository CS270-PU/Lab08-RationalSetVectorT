#include <iostream>
#include <fstream>
#include "../include/Rational.h"

using namespace std;

Rational::Rational (int numerator, int denominator) {
  mNumerator = numerator;
  mDenominator = denominator;
}

void Rational::write (ostream &rcOut) const {
  rcOut << mNumerator << " / " << mDenominator;
}

bool Rational::read (istream &rcIn) {
  char slash;
  bool bIsEOF;

  if (rcIn >> mNumerator >> slash >> mDenominator) {
    bIsEOF = false;
  }
  else {
    bIsEOF = true;
  }

  return bIsEOF;
}

Rational Rational::add (Rational &rcRational) const {
  int commonDenominator = mDenominator * rcRational.mDenominator;

  return Rational (mNumerator * (commonDenominator / mDenominator) +
         rcRational.mNumerator * (commonDenominator / rcRational.mDenominator),
         commonDenominator);
}

Rational Rational::multiply (Rational &rcRational) const {

  return Rational (mNumerator * rcRational.mNumerator,
                   mDenominator * rcRational.mDenominator);
}