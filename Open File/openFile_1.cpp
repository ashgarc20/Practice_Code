#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()

{
    string line;
    ifstream myfile("pc_under_construction.txt");
    if(myfile.is_open()){
        
        
    }
    else {
        cout << "Unable to open file\n"; 
    }
    
    return 0;
}