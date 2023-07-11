#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int X, Y;
    int W, H;
    
    cin >> X >> Y >> W >> H;
    
    int min1 = min(X,Y);
    int min2 = min(W-X, H-Y);
    
    cout << min(min1, min2);
    
}