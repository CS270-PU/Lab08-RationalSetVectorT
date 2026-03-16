//******************************************************************************
// File name:  
// Author:     
// Date:       
// Class:      
// Assignment: 
// Purpose:    
//
//******************************************************************************

#include <iostream>
#include <string>
#include <iostream>
#include "../include/Rational.h"

using namespace std;

void writeHeading (ostream &rcOut, const string &rcDecorate, 
                   const string &rcTitle);

int main () {
  Rational cR1, cR2;

  writeHeading (cout, "***", " Rational Calculator ");
  cout << endl << endl;

  cout << "Enter rational #1: ";
  cR1.read (cin);
  cout << "Enter rational #2: ";
  cR2.read (cin);

  cout << endl << endl;

  cR1.write (cout);
  cout << " + ";
  cR2.write (cout);
  cout << " = ";
  cR1.add (cR2).write (cout);

  cout << endl;
  cR1.write (cout);
  cout << " * ";
  cR2.write (cout);
  cout << " = ";
  cR1.multiply (cR2).write (cout);

  
  cout << endl << endl << "Program Completed" << endl;

  return EXIT_SUCCESS;
}

void writeHeading (ostream &rcOut, const string &rcDecorate, 
                   const string &rcTitle) {
  rcOut << rcDecorate << rcTitle << rcDecorate;
}