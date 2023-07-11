#include <iostream>
using namespace std;

int main()
{
    int X,Y,Z;
    
    while(true)
    {
        cin >> X >> Y >> Z;
        
        if(X==0 && Y==0 && Z==0)
        {
            break;
        }
        if(X==Y && Y==Z && X==Z)
        {
            cout << "Equilateral" << endl;
        }
        else if(X >= Y+Z || Y >= X+Z || Z >= Y+X)
        {
            cout << "Invalid" << endl;
        }
        else if(X==Y || X==Z || Y==Z)
        {
            cout<< "Isosceles" << endl;
        }
        else if(X!=Y && X!=Z && Y!=Z)
        {
            cout << "Scalene" << endl;
        }
        
    }
}