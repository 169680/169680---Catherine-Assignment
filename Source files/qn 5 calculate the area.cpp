#include <iostream>
using namespace std;
// declare a constant for pi
const double PI = 3.142;
// declare the main function
int main() {
  // declare variables to store the user input
  int choice; 
  double radius;
  double length; 
  double width;
  double base; 
  double height;
  // declare a variable to store the area
  double area;
cout << "Menu\n";
cout << "1. Calculate the area of a circle\n";
cout << "2. Calculate the area of a rectangle\n";
cout << "3. Calculate the area of a triangle\n";
cout << "4. Quit\n";

cout << "Enter your choice (1-4): ";
cin >> choice;

  // use switch...case statement to perform the corresponding calculation
  switch (choice) {
    case 1: // if the user chooses 1
      // prompt the user to enter the radius of the circle
      cout << "Enter the radius of the circle: ";
      cin >> radius;

      // calculate the area of the circle
      area = PI * radius * radius;

      // display the output
      cout << "The area of the circle is " << area << endl;
      break; // exit the switch
    case 2: // if the user chooses 2
      // prompt the user to enter the length and width of the rectangle
      cout << "Enter the length of the rectangle: ";
      cin >> length;
      cout << "Enter the width of the rectangle: ";
      cin >> width;

      // calculate the area of the rectangle
      area = length * width;

      // display the output
      cout << "The area of the rectangle is " << area << endl;
      break; // exit the switch
    case 3: // if the user chooses 3
      // prompt the user to enter the base and height of the triangle
      cout << "Enter the base of the triangle: ";
      cin >> base;
      cout << "Enter the height of the triangle: ";
      cin >> height;

      // calculate the area of the triangle using the formula A = 0.5 * b * h
      area = 0.5 * base * height;

      // display the output
      cout << "The area of the triangle is " << area << endl;
      break; // exit the switch
    case 4: // if the user chooses 4
      // display a message and quit the program
      cout << "Sad to see you quit. Thanks for using this program.\n";
      return 0; // indicate successful execution
    default: // if the user chooses an invalid option
      // display an error message and ask the user to try again
      cout << "Invalid choice. Please try again.\n";
  }
  return 0;
}