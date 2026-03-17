#include <iostream>
#include "../include/Rational.h"

Rational::Rational (int numerator, int denominator) {
  mNumerator = numerator;
  mDenominator = denominator;
}

void Rational::write (std::ostream& rcOut) const {
  rcOut << mNumerator << "/" << mDenominator;
}

bool Rational::read (std::istream& rcIn) {
  char slash;
  bool bSuccess;

  if (rcIn >> mNumerator >> slash >> mDenominator) {
    bSuccess = true;
  }
  else {
    bSuccess = false;
  }

  return bSuccess;
}

Rational Rational::add (const Rational& rcRational) const {
  int commonDenominator = mDenominator * rcRational.mDenominator;

  return Rational (
    mNumerator * (commonDenominator / mDenominator) +
    rcRational.mNumerator * (commonDenominator / rcRational.mDenominator),
    commonDenominator
  );
}

Rational Rational::multiply (const Rational& rcRational) const {
  return Rational (
    mNumerator * rcRational.mNumerator,
    mDenominator * rcRational.mDenominator
  );
}

bool Rational::isEqual (const Rational& rcRational) const {
  return mNumerator * rcRational.mDenominator ==
    mDenominator * rcRational.mNumerator;
}