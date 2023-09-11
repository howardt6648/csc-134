#include <iostream>
#include <iomanip>
using namespace std;

/*
CSC 134
M2t1 - Receipt Calculator
howard
(Originally 9/6/23, but I lost my data) 9/11/23
This program should take the price of a meal, which is $5.99, and print out a simple text receipt.
It should include:
 - The price before tax
 - The amount of tax owed (8%)
 - The total including tax
 */

int main()
{

    // set up variables
    double menu_price = 0;
    double tax_percent = 0.07; // for Cumberland County
    double item_price;
    int num_items;
    string item_name;

    // 1 - Greet the user
    cout << "Welcome to the CSC 134 Grill." << endl;

    // 2 - Ask the user for their order
    cout << "What would you like today?" << endl;
    cin >> item_name;

    cout << "What's the price on that item?" << endl;
    cin >> item_price;

    cout << "How many " << item_name << " (s) do you want? " << endl;
    cin >> num_items;

    // 3 - Calculate the menu price
    menu_price = num_items * item_price;

    // 4 - Print the receipt
    // tax in $ is meal price times tax pct
    // then add the tax in $ to get the total $
    double tax_dollars = menu_price * tax_percent ; // in dollars
    double total_price = menu_price + tax_dollars ;

    // tax in $ is meal price times tax pct
    // then add the tax in $ to get the total $

    // we #include <iomanip> at the top and use this magic below
    // to use 2 decimal places only
    cout << fixed << setprecision(2);
     //print the receipt
     cout << "Nutrients Price: $" << menu_price << endl;
     cout << "Taxable Amount is: $" << tax_dollars << endl;
     cout << "________________________" << endl;
     cout << "Your Total is: $" << total_price << endl;
     cout << "Thank you for dining at our ESTABLISHMENT! Beep boop!" << endl;


    return 0;
}
