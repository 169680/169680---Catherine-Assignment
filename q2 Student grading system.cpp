#include <iostream>
using namespace std;
int main() {
  // declare variables to store the user input
  string name; 
  string course; 
  int score; 
// prompt the user to enter the student details
  cout << "Enter the full name of the student: ";
  getline(cin, name); //getline reads the whole line
  cout << "Enter the course of the student: ";
  cin >> course;
  cout << "Enter the score of the student: ";
  cin >> score;

  // declare a variable to store the student's grade
  char grade;

  // use if...else-if...else structure to assign the grade
  if (score >= 70) {
    grade = 'A';
  }
  else if (score >= 60) {
    grade = 'B';
  }
  else if (score >= 50) {
    grade = 'C';
  }
  else if (score >= 40) {
    grade = 'D';
  }
  else if (score < 40) {
    grade = 'F';
  }
  else {
    grade = 'Invalid score'; 
  }

  // display the output
  cout << "The full name of the student is " << name << endl;
  cout << "The course of the student is " << course << endl;
  cout << "The score of the student is " << score << endl;
  cout << "The grade of the student is " << grade << endl;
  return 0;
}
