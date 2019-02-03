//
// valueOfCoins.cpp
// Author: Ashley Garcia
// Last Modified: February 1, 2019
// Description: Add the total value of the number of coins the user enters with quarters, dimes, and nickels
//

#include <iostream>
using namespace std;

int main()
{

    int Quarters = 0;
    int Dimes = 0;
    int Nickels = 0;
    int total = 0;

     cout << "Enter the amount of Quarters: " << endl;
     cin >> Quarters;
     cout << "Enter the amount of Dimes: " << endl;
     cin >> Dimes;
     cout << "Enter the amount of Nickels: " << endl;
     cin >> Nickels;

     total = (Quarters*25)+(Dimes*10)+(Nickels*5);

     cout << "The coins worth are: " << total << endl;

     return 0;
}
// End of program
