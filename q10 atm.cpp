#include <iostream>
using namespace std;
int main()
{
    // Declare variables
    double account_balance, withdrawal_amount, daily_limit, daily_withdrawal;
    bool valid_input;
    
    // Initialize variables
    account_balance = 17000; // Assume the user has ksh 17000 in their account
    daily_limit = 8500; // Assume the user has a daily withdrawal limit of ksh 8500
    daily_withdrawal = 0; // Assume the user has not withdrawn any money today
    valid_input = false; // Assume the user has not entered a valid input yet
    
    // Prompt the user to enter the withdrawal amount
    cout << "Welcome to the Blips Bank ATM. Please enter the amount you wish to withdraw: ";
    
    // Loop until the user enters a valid input
    while (!valid_input)
    {
        // Read the input
        cin >> withdrawal_amount;
        
        // Validate the input
        if (withdrawal_amount < 0)
        {
            // Negative input is invalid
            cout << "Invalid input. Please try again: ";
        }
        else if (withdrawal_amount > account_balance)
        {
            // Insufficient funds error message 
            cout << "Sorry, you do not have enough funds in your account to withdraw ksh "<< withdrawal_amount<<" Please enter a smaller amount: ";
        }
        else if (withdrawal_amount + daily_withdrawal > daily_limit)
        {
            // Exceeding daily limit error message 
            cout << "Sorry, you have reached your daily withdrawal limit of ksh " << daily_limit << ". Please enter a smaller amount: ";
        }
        else
        {
            // Valid input
            valid_input = true;
        }
    }
    
    // Process the withdrawal
    account_balance -= withdrawal_amount; // Deduct the withdrawal amount from the account balance
    daily_withdrawal += withdrawal_amount; // Add the withdrawal amount to the daily withdrawal
    
    // Display the result
    cout << "You have successfully withdrawn ksh " << withdrawal_amount << " from your account." << endl;
    cout << "Your account balance is ksh " << account_balance << "." << endl;
    cout << "Daily withdrawal limit remaining is ksh " << daily_limit - daily_withdrawal << "." << endl;
    
    return 0;
}
