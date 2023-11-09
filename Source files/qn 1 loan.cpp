#include <iostream>
using namespace std;
// declare a structure to store customer details
struct customer {
  string name; // customer name
  int age; // customer age
  double balance; // customer bank balance
  string crb; // customer CRB status
  int months; // customer months with the bank
};
// declare a function to check if a customer is qualified for a loan
bool is_qualified(customer cust) {
  // check the conditions
  if (cust.age > 22 && cust.balance > 50000 && cust.crb == "good" && cust.months > 6) {
    // return true if all conditions are met
    return true;
  }
  else {
    // return false otherwise
    return false;
  }
}
// declare the main function
int main() {
  // declare a variable to store customer details
  customer cust;
  // prompt the user to enter customer details
  cout << "Please, Enter the name of the customer: ";
  cin >> cust.name;
  cout << "Please, Enter the customer's age: ";
  cin >> cust.age;
  cout << "Enter the bank balance of the customer: ";
  cin >> cust.balance;
  cout << "Enter customer CRB status (good or bad): ";
  cin >> cust.crb;
  cout << "Enter the numberoof months the customer has been using the bank: ";
  cin >> cust.months;
  // call the function to check if the customer is qualified for a loan
  bool result = is_qualified(cust);
  // display the result recalling the predefined variable of the name of the customer 
  if (result) {
    cout << "The customer, " <<cust.name<< " is qualified for a loan.\n";
  }
  else {
    cout << "The customer,"<<cust.name<<" is not qualified for a loan.\n";
  }
  return 0;
}
