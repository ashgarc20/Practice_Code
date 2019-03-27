//
#include <iostream>
using namespace std;

int main()
{
    string gamerTags;
    string player1name;
    string player2name;
    
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
            cout << "Enter player's name using max 11 characters" << endl;
            // ask the user for name 1 and name 2
            checkGamerTag = true;
            
            cout << "Enter player one name:\n";
            cin >> player1name;
            // create a code to make sure the user met the requirements 
            // using the string length (max 11)and going through the array characters(a-z)
            
            cout << "Enter player two name: \n";
            cin >> player2name;
            // create a code to make sure the user met the requirements
            // using the string length (max 11) and going trough the array characters (a-z)
            
            
            player1name = player1name.substr(0,10); // substr(#,#) limits the character input
            player2name = player2name.substr(0,10);
            
            
            
            cout << "Player one name: "<< player1name << endl;
            cout << "player two name: " << player2name << endl;
        } 
        else {
            cout << "Not a valid response. Try again:" << endl;
        }
        
    }while(checkGamerTag != true);
    
    
    return 0;
}