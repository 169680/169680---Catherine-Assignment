#include <iostream>
using namespace std;
int main() {
  // declare variables to store the user input
  int num1; // first number
  int num2; // second number

  // prompt the user to enter two numbers
  cout << "Enter the first number: ";
  cin >> num1;
  cout << "Enter the second number: ";
  cin >> num2;
  // declare a variable to store the maximum number
  int max;
  // use switch...case to compare the two numbers
  switch (num1 > num2) { // compare the first number with the second number
    case true: // if the first number is greater than the second number
      max = num1; // assign the first number to max
      break; // exit the switch
    case false: // if the first number is less than or equal to the second number
      max = num2; // assign the second number to max
      break; // exit the switch
  }

  // display the output
  cout << "The maximum number is " << max << endl;
  return 0;
}