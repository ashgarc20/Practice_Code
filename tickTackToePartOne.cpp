#include <iostream>
#include <array>
using namespace std;

int main ()

{
    array <int,9> game = { 1,2,3,4,5,6,7,8,9};
    
    //for (auto x:game ) cout << ' ' << x;
    //cout << '\n';
    
    for (int x = 0; x < 9; x++)
    {
        if (x%3 == 0)
        {
            cout << endl;
        }
        cout << game[x] << " " ;
    }
    return 0;

}