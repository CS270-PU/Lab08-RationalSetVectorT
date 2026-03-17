#ifndef RATIONALSET_H
#define RATIONALSET_H

#include <vector>
#include <istream>
#include <ostream>
#include "Rational.h"

//****************************************************************************** 
// Class name:   RationalSet
// Purpose:      Stores a collection of Rational numbers using a vector.
//               Ensures no duplicate Rational values are stored.
//
//               Output format examples:
//                 {}
//                 {1/2}
//                 {1/2, 2/3}
//
//               Optional read format examples;
//                 {}
//                 {1/2}
//                 {1/2 2/3}     notice no comma
//******************************************************************************

class RationalSet {
public:

  // Constructor
  RationalSet ();

  // Returns the number of rationals in the set
  int size () const;

  // Returns true if the rational is already in the set, false otherwise
  bool isIn (const Rational& rcRational) const;

  // Adds a rational to the set
  // Does NOT add if the rational is already in the set
  void add (const Rational& rcRational);

  // Writes the set to an output stream
  // Example outputs: {}, {1/2}, {1/2, 2/3}
  void write (std::ostream& rcOut) const;

  // Reads a rational set from an input stream
  // Expected inputs: {}, {1/2}, {1/2 2/3}
  bool read (std::istream& rcIn);

private:

  std::vector<Rational> mcRationals;

};

#endif