#include <iostream>
using namespace std;

int main()
{
    int a1, a0;
    int c;
    int n0;
    
    cin >> a1 >> a0 >> c >> n0;
    
    long fn = (a1 * n0) + a0;
    long cgn = c*n0;
    
    if(fn<=cgn && a1<=c)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
}