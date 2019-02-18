#include <iostream>
using namespace std;

int main()
{
    string next;
    
    cout << "exit or continue ?" << endl;
    
    bool checkIfContinued = false;
    bool didUserContinue = false;
    
    do {
        cin >> next;
        
        if (next.compare("continue") == 0){
            cout << "Player v. Player Activated!" << endl;
            
            checkIfContinued = true;
            didUserContinue = true;
        }
        else if (next.compare("exit") == 0){
            exit(0);
        }
        else {
            cout << "Please enter valid response:\n";
        }
        
        
    }while(checkIfContinued != true);

    
    
    return 0;
}