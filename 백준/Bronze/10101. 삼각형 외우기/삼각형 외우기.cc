#include <iostream>
using namespace std;

int main()
{
    int X,Y,Z;
    cin >> X >> Y >> Z;
    
    int sum = X+Y+Z;
    
    if(X==60 && Y==60 && Z==60)
    {
        cout << "Equilateral";
    }
    else if(sum==180 && ( X==Y || X==Z || Y==Z ))
    {
        cout << "Isosceles";
    }
    else if(sum==180 && X!=Y && X!=Z && Y!=Z )
    {
        cout << "Scalene";
    }
    else if(sum!=180)
    {
        cout << "Error";
    }
}