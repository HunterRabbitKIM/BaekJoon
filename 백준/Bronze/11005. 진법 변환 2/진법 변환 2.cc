#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int N, B;
    cin >> N >> B;
    
    string A;
    int rest;
    
    while(N != 0)
    {
        rest = N % B;
        if(rest > 9)
        {
            rest = rest + 65 - 10;
            A += rest;
        }
        else
        {
            rest = rest + 48;
            A += rest;
        }
        N = N/B;
    }
    reverse(A.begin(), A.end());
    
    cout << A;
    
}