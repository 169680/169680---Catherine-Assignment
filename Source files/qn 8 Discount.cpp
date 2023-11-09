#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    double purchase_amount, discount_rate, discount_amount, total_cost;
    
    // Prompt the user to enter the purchase amount
    cout << "Enter the purchase amount: ";
    cin >> purchase_amount;
    
    // Validate the input
    if (purchase_amount < 0)
    {
        cout << "Invalid input. Purchase amount must be positive." << endl;
        return 0;
    }
    
    // Determine the discount rate based on the purchase amount
    if (purchase_amount >= 500)
    {
        discount_rate = 0.2; // 20% discount
    }
    else if (purchase_amount >= 200)
    {
        discount_rate = 0.1; // 10% discount
    }
    else if (purchase_amount >= 100)
    {
        discount_rate = 0.05; // 5% discount
    }
    else
    {
        discount_rate = 0; // No discount
    }
    
    // Calculate the discount amount and the total cost
    discount_amount = purchase_amount * discount_rate;
    total_cost = purchase_amount - discount_amount;
    
    // Display the results
    cout << "The discount rate is " << discount_rate * 100 << "%." << endl;
    cout << "The discount amount is ksh" << discount_amount << "." << endl;
    cout << "The total cost is ksh" << total_cost << "." << endl;
    
    return 0;
}