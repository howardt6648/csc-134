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
    cout << "Receipt Calculator" << endl;
    // TODO: Ask the user the meal price
    double menu_price = 5.99;
    double tax_percent = 0.07; // for Cumberland County
    double tax_dollars = menu_price * tax_percent ; // in dollars
    double total_price = menu_price + tax_dollars; // price including tax

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
