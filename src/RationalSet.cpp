#include "RationalSet.h"

//****************************************************************************** 
// Constructor
//****************************************************************************** 
RationalSet::RationalSet () {
}

//****************************************************************************** 
// Returns the number of rationals in the set
//****************************************************************************** 
int RationalSet::size () const {
  return mRationals.size ();
}

//****************************************************************************** 
// Returns true if the rational is already in the set
//****************************************************************************** 
bool RationalSet::isIn (const Rational& rcRational) const {
  for (const Rational& r : mRationals) {
    if (r.isEqual (rcRational)) {
      return true;
    }
  }
  return false;
}

//****************************************************************************** 
// Adds a rational to the set (no duplicates)
//****************************************************************************** 
void RationalSet::add (const Rational& rcRational) {
  if (!isIn (rcRational)) {
    mRationals.push_back (rcRational);
  }
}

//****************************************************************************** 
// Writes the set to an output stream
//****************************************************************************** 
void RationalSet::write (std::ostream& rcOut) const {
  rcOut << "{";

  for (size_t i = 0; i < mRationals.size (); ++i) {
    mRationals[i].write (rcOut);
    if (i < mRationals.size () - 1) {
      rcOut << ", ";
    }
  }

  rcOut << "}";
}

//****************************************************************************** 
// OPTIONAL: Reads a rational set from an input stream
//****************************************************************************** 
bool RationalSet::read (std::istream& rcIn) {
  mRationals.clear ();

  char ch;
  rcIn >> ch;
  if (ch != '{') return false;

  Rational r;
  while (r.read (rcIn)) {
    add (r);
  }

  rcIn.clear (); // clear fail from last read attempt

  rcIn >> ch;
  return ch == '}';
}