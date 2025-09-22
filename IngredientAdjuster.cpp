/*File Name: IngredientAdjuster.cpp
Programmer: Chad Gould
09/20/2025
Requirements: Cookie recipe with the following 3 ingredients: Sugar, Butter, and Flour, and the amounts. Write a program that asks the user how many cookies they want to make, then displays the number of cups of each ingredient needed for the specified amount of cookies. */

#include <iostream>
using namespace std;

int main()
{
    const double sugarPerCookie = 1.5 / 48;   
    const double butterPerCookie = 1.0 / 48;  
    const double flourPerCookie = 2.75 / 48;  

    int desiredCookies;

    cout << "How many cookies would you like to make? ";
    cin >> desiredCookies;

    double requiredSugar = sugarPerCookie * desiredCookies;
    double requiredButter = butterPerCookie * desiredCookies;
    double requiredFlour = flourPerCookie * desiredCookies;

    cout << "\nTo make " << desiredCookies << " cookies, you will need:\n";
    cout << requiredSugar << " cups of sugar\n";
    cout << requiredButter << " cups of butter\n";
    cout << requiredFlour << " cups of flour\n";

    return 0;
}