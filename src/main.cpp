//****************************************************************************** 
// File name:    main.cpp
// Author:       
// Date:         
// Class:        
// Assignment:   
// Purpose:      
//
//******************************************************************************

#include <cstdlib>
#include <iostream>
#include <string>
#include "../include/Rational.h"

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
  std::cout << "Program Completed" << std::endl;

  return EXIT_SUCCESS;
}

void writeHeading (std::ostream& rcOut, const std::string& rcDecorate,
                   const std::string& rcTitle) {
  rcOut << rcDecorate << rcTitle << rcDecorate;
}