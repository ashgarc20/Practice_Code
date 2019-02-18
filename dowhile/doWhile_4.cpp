#include <iostream>
using namespace std;

int main()
{
    string gamerTags;
    
    cout << "Do you want default names or create custom names?\n";
    cout << "Enter 'default' or 'custom' :"<< endl;
    
    bool checkGamerTag = false;
    
    do {
        
        cin >> gamerTags;
        
        if (gamerTags.compare("default") == 0){
            cout << "Okay !" << endl;
            // we are going to add a file adding names for 
            // we can assign funny names to user like coke and pepsi
            //
            checkGamerTag = true;
        }
        else if (gamerTags.compare("custom") == 0){
            cout << " Okay then!" << endl;
            // ask the user for name 1 and name 2
            checkGamerTag = true;
        }
        else {
            cout << "Not a valid response. Try again:" << endl;
        }
        
    }while(checkGamerTag != true);
    
    return 0;
}