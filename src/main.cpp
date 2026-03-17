//****************************************************************************** 
// File name:    main.cpp
// Author:       
// Date:         
// Class:        
// Assignment:   
// Purpose:      Demonstrate Rational operations
//******************************************************************************

#include <cstdlib>
#include <iostream>
#include <string>
#include "../include/Rational.h"
#include "../include/RationalSet.h"

void writeHeading (std::ostream& rcOut, const std::string& rcDecorate,
  const std::string& rcTitle);

int main () {
  Rational cR1;
  Rational cR2;

  writeHeading (std::cout, "***", " Rational Calculator ");
  std::cout << std::endl << std::endl;

  std::cout << "Enter rational #1: ";
  if (!cR1.read (std::cin)) {
    std::cout << "Invalid rational number." << std::endl;
    return EXIT_FAILURE;
  }

  std::cout << "Enter rational #2: ";
  if (!cR2.read (std::cin)) {
    std::cout << "Invalid rational number." << std::endl;
    return EXIT_FAILURE;
  }

  std::cout << std::endl << std::endl;

  cR1.write (std::cout);
  std::cout << " + ";
  cR2.write (std::cout);
  std::cout << " = ";
  cR1.add (cR2).write (std::cout);

  std::cout << std::endl;

  cR1.write (std::cout);
  std::cout << " * ";
  cR2.write (std::cout);
  std::cout << " = ";
  cR1.multiply (cR2).write (std::cout);

  std::cout << std::endl << std::endl;

  // ------------------------------------------------------------------
 // RationalSet demo (build incrementally)
 // ------------------------------------------------------------------

  RationalSet cSet;

  // TODO #1: Test constructor + write()
  // Expected: {}

  // std::cout << "Initial set: ";
  // cSet.write (std::cout);
  // std::cout << std::endl;


  // TODO #2: Test isIn() on empty set
  // Expected: cR1 is NOT in the set

  // if (cSet.isIn (cR1)) {
  //   std::cout << "cR1 is in the set" << std::endl;
  // }
  // else {
  //   std::cout << "cR1 is NOT in the set" << std::endl;
  // }


  // TODO #3: Test add() + write()
  // Expected: {1/2, 2/3}

  // cSet.add (cR1);
  // cSet.add (cR2);
  // cSet.add (cR1);  // duplicate, should NOT be added

  // std::cout << "After adding elements: ";
  // cSet.write (std::cout);
  // std::cout << std::endl;


  // TODO #4: Test size()
  // Expected: 2

  // std::cout << "Set size: " << cSet.size () << std::endl;


  // TODO #5: Test isIn() again after adds
  // Expected: cR1 is in the set

  // if (cSet.isIn (cR1)) {
  //   std::cout << "cR1 is in the set" << std::endl;
  // }
  // else {
  //   std::cout << "cR1 is NOT in the set" << std::endl;
  // }


  // TODO #6:

  // RationalSet cInputSet;

  // std::cout << "Enter a rational set: ";
  // if (!cInputSet.read (std::cin)) {
  //   std::cout << "Invalid set format." << std::endl;
  // }
  // else {
  //   std::cout << "You entered: ";
  //   cInputSet.write (std::cout);
  //   std::cout << std::endl;

  //   std::cout << "Set size: " << cInputSet.size () << std::endl;
  // }

  std::cout << std::endl << "Program Completed" << std::endl;

  return EXIT_SUCCESS;
}

void writeHeading (std::ostream& rcOut, const std::string& rcDecorate,
  const std::string& rcTitle) {
  rcOut << rcDecorate << rcTitle << rcDecorate;
}