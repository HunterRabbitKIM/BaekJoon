#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    long int X,Y;
    long int maxX=-10000; 
    long int minX=10000;
    long int maxY=-10000; 
    long int minY=10000;
    long int tmpX=0; 
    long int tmpY=0;
    
    for(int i=0; i<N; i++)
    {
        cin >> X >> Y;
        if(maxX<X)
        {
            maxX = X;
        }
        if(minX>X)
        {
            minX = X;
        }
        
        if(maxY<Y)
        {
            maxY = Y;
        }
        if(minY>Y)
        {
            minY=Y;
        }
    }
    tmpX = abs(maxX-minX);
    tmpY = abs(maxY-minY);
    
    cout << tmpX*tmpY;
    
}