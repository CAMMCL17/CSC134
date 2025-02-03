// CSC 134
// M2T2 - Hello world 
// Chayse 
//2/3/2025

#include <iostream>
#include <iomanip> // needed for the deciamals thing
using namespace std; 

int main()
{     // Set up the variables

      string store_name = "CAMAlex";
      string food_name = "burger";
      double food_price = 5.99; // we can make this input 
      // Do the order 
    cout << "Welcome to " << store_name << endl;
    cout << "You have one " << food_name;
    cout << " which costs $" << food_price << endl;


   // Figure out the subtotal and total 
   double subtotal, total;
   subtotal = food_price; // changes if they buy more
   // Remember tax is two thing, the peercent and the $
   double tax_percent = 0.08; // 8% is 8/100
   double tax_cost = tax_percent * subtotal;
   total = subtotal + tax_cost;

   // Print the receipt 
   cout << setprecision(2) << fixed; // magic words for 2 decimals
   // \t is the tab key
   cout << "YOUR RECEIPT" << endl;
   cout << "----------------" << endl;
   cout << " Subtotal:\t$" << subtotal << endl;
   cout << "Tax:\t\t$"<< tax_cost << endl;
   cout << "-----------------" << endl;
   cout << "Total;\t\t$" << total << endl;
   cout << "Have a nice day!" << endl;
   cout << endl;
   return 0; // no errors

}


