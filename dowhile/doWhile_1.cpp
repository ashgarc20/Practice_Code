//
//doWhile_1.cpp
//Author: Ashley Garcia
// Last Modified: February 3, 2019
// Description: Using do while to add number boundries
// 
#include <iostream>
using namespace std;

int main ()
{
    int numberValue;
    
    cout << "Enter a number between 100 and 120:"<< endl;
       
    bool checkNumberValue = false;

    do{
        cin >> numberValue;
        
        if(numberValue < 101 || numberValue > 119 ){ 
            cout << "Please enter valid number:"<< endl;
        }
                
        else{ 
            checkNumberValue = true;
        }
        
    }while (checkNumberValue != true);
    
    
    return 0;
}