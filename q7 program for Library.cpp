#include <iostream>
using namespace std;

int main() {
    // declare variables to store the user input
    int days; // number of days late
    char type; // type of book (r for regular, c for children's, or f for reference)

    // declare a variable to store the fine amount
    double fine;
    cout << "Enter the number of days late: ";
    cin >> days;
    cout << "Enter the type of book (r for regular, c for children's, or f for reference): ";
    cin >> type;

    // use if, else if, and else statements to calculate the fine amount based on the days and type
    if (days <= 0) { // if the book is not late or returned early
        fine = 0; // no fine
    }
    else if (type == 'r') { // if the book is regular
        if (days <= 7) { // if the book is late by 7 days or less
            fine = 20 * days; // fine is ksh 20per day
        }
        else { // if the book is late by more than 7 days
            fine = 20 * 7 + 10 * (days - 7); // fine is ksh20 per day for the first 7 days and ksh10 per day for the remaining days
        }
    }
    else if (type == 'c') { // if the book is children's
        if (days <= 7) { // if the book is late by 7 days or less
            fine = 15 * days; // fine is ksh 15 per day
        }
        else { // if the book is late by more than 7 days
            fine = 15 * 7 + 10 * (days - 7); // fine is ksh 15 per day for the first 7 days and ksh 10 per day for the remaining days
        }
    }
    else if (type == 'f') { // if the book is reference
        if (days <= 7) { // if the book is late by 7 days or less
            fine = 15.75 * days; // fine is ksh 15.75 per day
        }
        else { // if the book is late by more than 7 days
            fine = 15.75 * 7 + 10.5 * (days - 7); // fine is ksh 15.75 per day for the first 7 days and ksh 10.5 per day for the remaining days
        }
    }
    else { // if the book type is invalid
        fine = -1; // invalid fine
    }

    // display the output
    if (fine >= 0) { // if the fine is valid
        cout << "The fine amount is Ksh" << fine << endl;
    }
    else { // if the fine is invalid
        cout << "Invalid book type. Please try again.\n";
    }
    return 0;
}
    