#include <iostream>
using namespace std;
int main() {
  // declare variables to store the user input
  string name; // student name
  string course; // student course
  int score; // student score

  // prompt the user to enter the student details
  cout << "Enter the full name of the student: ";
  getline(cin, name); //getline  reads the whole line
  cout << "Enter the course of the student: ";
  cin >> course;
  cout << "Enter the score of the student: ";
  cin >> score;
  // declare a variable to store the student grade
  string grade;
  // use switch structure to assign the grade 
  switch (score / 10) { // divides the score by 10 to get the first digit
    case 10: // if the score is 100
    case 9: // if the score is 90-99
    case 8: // if the score is 80-89
    case 7: // if the score is 70-79
      grade = 'A'; // will apply to all scores greater or equal to 70
      break; 
    case 6: // if the score is 60-69
      grade = 'B'; 
      break; 
    case 5: // if the score is 50-59
      grade = 'C';
      break; 
    case 4: // if the score is 40-49
      grade = 'D'; 
      break;
    case 3: // if the score is 30-39
    case 2: // if the score is 20-29
    case 1: // if the score is 10-19
    case 0: // if the score is 0-9
      grade = 'F'; // assign grade F
      break; 
    default: // if the score is invalid
      grade = 'Invalid Score'; //gives the error message 
      break; // exit the switch
  }