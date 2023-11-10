#include<iostream>
using namespace std;

int main()
{
    int Food,Food2,quantity,quantity2 ;
    double price,price2,total,total1,total2 ;
    string name;
    cout << "Hello customer, please enter your name: " << endl;
    cin >> name;
    cout << "Dear "<<name<<" welcome to our hotel, here is our menu" << endl;
    cout << ".            MENU.        " << endl;
    cout << "1.Coffee.       Ksh. 50.00" << endl;
    cout << "2. Pilau.       Ksh 200.00" << endl;
    cout << "3. Ugali Fish.  Ksh 350.00" << endl;
    cout << "3.Chapo Ndengu. Ksh 100.00" << endl;
    cout << "4.Fried chicken Ksh 650.50" << endl;
    cout << "5. Spanish omelette. Ksh 150.00" << endl;
    cout << "6. QUIT" << endl;
    cout << "Select your choice by typing in the number against your desired meal: " << endl;
    cin >> Food;

    while (Food < 1 || Food > 6)
    {
        cout << "Invalid choice. Please enter a valid choice (1-6): ";
        cin >> Food;
    }
    if (Food == 6)
    {
        cout << "Dear "<<name<< " Thank you for visiting the shop. Goodbye!"<<endl;
        return 0;
    }
    cout << "Enter the quantity of your desired meal: "<<endl;
    cin >> quantity;

    while (quantity < 1)
    {
        cout << "Error! Please try again: ";
        cin >> quantity;
    }

    switch (Food)
    {
    case 1:
        price = 50.00;
        break;
    case 2:
        price = 200.00;
        break;
    case 3:
        price = 350.00;
        break;
    case 4:
        price = 650.00;
        break;
    case 5 :
        price = 150.00;
    }

    total1 = price * quantity;

cout << "Select a meal to accompany your first meal" << endl;
    cout << "1.Orange juice      Ksh. 50.00" << endl;
    cout << "2. Garlic bread       Ksh 70.00" << endl;
    cout << "3. Lettuce.        Ksh 40.00" << endl;
    cout << "3.Frenc fries      Ksh 100.00" << endl;
    cout << "4.Cocacolla        Ksh 50.50" << endl;
    cout << "5. Red bull        Ksh 150.00" << endl;
    cout << "Select your choice by typing in the number against your desired meal: " << endl;
    cin >> Food2;

    while (Food2 < 1 || Food2 > 5)
    {
        cout << "Invalid choice. Please enter a valid choice (1-5): ";
        cin >> Food2;
    }
    cout << "Enter the quantity of your desired second meal: "<<endl;
    cin >> quantity2;

    while (quantity2 < 1)
    {
        cout << "Error! Please try again: ";
        cin >> quantity2;
    }

    switch (Food2)
    {
    case 1:
        price2 = 50.00;
        break;
    case 2:
        price2 = 70.00;
        break;
    case 3:
        price2 = 40.00;
        break;
    case 4:
        price2 = 100.50;
        break;
    case 5 :
        price2 = 150.00;
    }

    total2 = (price2 * quantity2);
    total=(total1 + total2);

    cout << "Dear "<<name<<" The total amount to be paid is Ksh " << total <<endl;

    return 0;
}
