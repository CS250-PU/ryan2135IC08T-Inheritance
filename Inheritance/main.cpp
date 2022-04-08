#include <iostream>
#include "Employee.h"

//**********************************************************************
// Function:    main
//
// Description:	Demonstrate Inheritance
//              Declare a base class object and a derived class object.
//              call functions on both objects.
//
// Parameters:	none
//
// Returned:		exit status
//**********************************************************************

int main () {

  // base class object
  Employee cEmployee ("Jane Smith", "123456789");

  // derived class object
  //HourlyEmployee cHEmployee ("Bob Smith", "987654321", 21, 10);

  cEmployee.print (std::cout);
  std::cout << "\n\n";

  //cHEmployee.print (cout);
  //cout << "\n\n";

  return EXIT_SUCCESS;
}