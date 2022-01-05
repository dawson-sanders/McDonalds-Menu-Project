//---------------------------------------------------
// Purpose: Implement a simple interactive McDonalds based menu.
// Author: Dawson Sanders
//---------------------------------------------------
#include <iostream>
#include <iomanip>
using namespace std;

//Global Variables
const float ChickenPrice = 6.99;
const float MacPrice = 8.29;
const float CheeseburgerPrice = 6.39;
const float McNuggetsPrice = 8.59;
const float FishPrice = 7.99;
const float SmallPrice = 1.00;
const float MediumPrice = 1.50;
const float LargePrice = 2.00;
const float TaxRate = 0.065;



int main()
{
    
    // Declare prices of meal variables 
    float Total = 0;
    float Final = 0;

    // Prompting meal option outputs 
    cout << "Welcome to McDonald's Express Lane" << endl;
    cout << "" << endl;
    cout << "Please select a meal below:" << endl;
    cout << "  " << 1 << ") Crispy Chicken Sandwich Meal ($6.99)" << endl;
    cout << "  " << 2 << ") Big Mac Meal ($8.29)" << endl;
    cout << "  " << 3 << ") Cheeseburger Meal ($6.39)" << endl;
    cout << "  " << 4 << ") 10 Piece McNuggets Meal ($8.59)" << endl;
    cout << "  " << 5 << ") Filet O Fish Meal ($7.99)" << endl;
    cout << "Enter Meal Selection: ";
    int Meal = 0;
    cin >> Meal; 
    cout << "Your Meal Selection: " << Meal << endl;
    
    cout << "" << endl;
    
    // Prompting drink option outputs
    cout << "Please select one of the drinks below: " << endl;
    cout << "  " << 1 << ") Coke " << endl;
    cout << "  " << 2 << ") Orange Crush " << endl;
    cout << "  " << 3 << ") Sprite " << endl;
    cout << "  " << 4 << ") Diet Coke " << endl;
    cout << "Enter Drink Selection: ";
    int Drink = 0;
    cin >> Drink; 
    cout << "Your Drink Selection: " << Drink << endl;
    
    cout << "" << endl;
    
    // Prompting size of drink
    cout << "What size would you like? " << endl;
    cout << "  " << 1 << ") Small (+ $1.00) " << endl;
    cout << "  " << 2 << ") Medium (+ $1.50) " << endl;
    cout << "  " << 3 << ") Large (+ $2.00) " << endl;
    cout << "Enter Size Selection: ";
    int Size = 0;
    cin >> Size; 
    cout << "Your Size Selection: " << Size << endl;
    
    cout << "" << endl;

    // Prompting thank you message 
    cout << "Thank you for ordering: " << endl;
    
    // Switch statement for meal selection
    while (Meal <= 0 || Meal >= 6)
    {
        cout << "Sorry option not available" << endl;
        cout << "Enter New Meal" << endl;
        cin >> Meal;
    }
   
    switch (Meal)
    {
        case 1:
        cout << "The Crispy Chicken Sandwich Meal ";
        Total += ChickenPrice;
        break;
        
        case 2: 
        cout << "The Big Mac Meal ";
        Total += MacPrice;
        break;
    
        case 3:
        cout << "The Cheeseburger Meal ";
        Total += CheeseburgerPrice;
        break;
    
        case 4:
        cout << "The 10 Piece McNuggets Meal ";
        Total = McNuggetsPrice;
        break;
    
        case 5:
        cout << "The Filet O Fish Meal ";
        Total = FishPrice;
        
    }
    
    // Switch statement for size selection
    while (Size <= 0 || Size >= 4)
    {
        cout << "Sorry option not available" << endl;
        cout << "Enter New Size" << endl;
        cin >> Size;
    }
   
    switch (Size)
    { 
        case 1:
        cout << "and a Small ";
        Total += SmallPrice;
        break;
    
        case 2: 
        cout << "and a Medium ";
        Total += MediumPrice;
        break;
    
        case 3:
        cout << "and a Large ";
        Total += LargePrice;
    
    }
    
    // Switch statement for drink selection
    while (Drink <= 0 || Drink >= 5)
    {
        cout << "Sorry option not available" << endl;
        cout << "Enter New Drink" << endl;
        cin >> Drink;
        
    }
   
    switch (Drink)
    { 
        case 1:
        cout << "Coke ";
        break;
    
        case 2: 
        cout << "Orange Crush ";
        break;
    
        case 3:
        cout << "Sprite ";
        break;
    
        case 4:
        cout << "Diet Coke ";
    
    }


    // Price calculation
    cout << "" << endl;
    cout << "Your price with 6.5% tax is: $";
    
    Final = (Total * TaxRate) + Total;
    cout << fixed << setprecision(2) << Final; 
    
    return 0;
}
