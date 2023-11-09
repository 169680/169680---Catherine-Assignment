#include <iostream>
#include <ctime>
using namespace std;

int main() {
  // declare a variable to store the current time
  time_t now = time(0);

  // declare a variable to store the seconds elapsed 
  int seconds = now % 86400;

  // declare a variable to store the color of the traffic light
  string color;

  // use switch...case statement to determine the color based on the timer
  switch (seconds % 10) { // use the remainder of seconds divided by 10 to get the last digit
    case 0: // if the last digit is 0
    case 1: // if the last digit is 1
    case 2: // if the last digit is 2
    case 3: // if the last digit is 3
    case 4: // if the last digit is 4
      color = "red"; // assign red to color
      break; // exit the switch
    case 5: // if the last digit is 5
      color = "yellow"; // assign yellow to color
      break; // exit the switch
    case 6: // if the last digit is 6
    case 7: // if the last digit is 7
    case 8: // if the last digit is 8
    case 9: // if the last digit is 9
      color = "green"; // assign green to color
      break; // exit the switch
  }

  // display the output
  cout << "The color of the traffic light is " << color << endl;
  return 0;
}
