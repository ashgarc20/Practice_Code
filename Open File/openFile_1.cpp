#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()

{
    string line;
    ifstream myfile("pc_under_construction.txt");
    if(myfile.is_open()){
        
        while(getline(myfile, line)){
            cout << line << endl;
        }
        myfile.close();
    }
    else {
        cout << "Unable to open file\n"; 
    }
    
    return 0;
}