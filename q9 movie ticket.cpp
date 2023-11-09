#include <iostream>
using namespace std;
int main()
{
    int age, movie_type, ticket_price;
    // Prompt the user to enter the age of the customer
    cout << "Enter the age of the customer: ";
    cin >> age;
    // Validate the input
    if (age < 0)
    {
        cout << "Invalid input. Age must be positive." << endl;
        return 0;
    }
    
    // Prompt the user to enter the type of movie (1 for regular, 2 for 3D)
    cout << "Enter the type of movie (1 for regular, 2 for 3D): ";
    cin >> movie_type;
    
    // Validate the input
    if (movie_type != 1 && movie_type != 2)
    {
        cout << "Invalid input. Movie type must be 1 or 2." << endl;
        return 0;
    }
    
    // Determine the ticket price based on the age and the movie type
    if (age < 12)
    {
        // Children under 12 pay half price
        if (movie_type == 1)
        {
            ticket_price = 250; // Regular movie
        }
        else
        {
            ticket_price = 500; // 3D movie
        }
    }
    else if (age >= 60)
    {
        // seniors pay 75% of the price
        if (movie_type == 1)
        {
            ticket_price = 375;
        }
        else
        {
            ticket_price = 750; 
        }
    }
    else
    {
        // Adults pay full price
        if (movie_type == 1)
        {
            ticket_price = 500; 
        }
        else
        {
            ticket_price = 1000;
        }
    }
    cout << "The ticket price is Ksh " << ticket_price << "/=" << endl;
    
    return 0;
}
