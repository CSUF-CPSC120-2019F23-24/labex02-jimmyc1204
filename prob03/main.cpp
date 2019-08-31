// Name:
// This program calculates the tax and tip on a restaurant bill.

#include <iostream>

int main()
{
  double cost, Tax, tip, totalbill;
  std::cout << "Welcome to the Restaurant Bill Calculator!" << '\n'; std::cout << "What is the total meal cost?";
  std::cin >> cost;

//calulations for tax
  Tax= cost * .0775;
  std::cout << "Tax   " << Tax <<'\n';

//calculations for tip
  tip= cost * .2;
  std::cout << "Tip   " << tip <<'\n';

//calculations for total Bill
  totalbill= cost + Tax + tip;
  std::cout << "Total Bill   " << totalbill << '\n';




  return 0;

}
