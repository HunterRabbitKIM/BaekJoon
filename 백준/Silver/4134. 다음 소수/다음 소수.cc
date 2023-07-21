#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

bool dec(long long a)
{
    for(int j = 2; j <= sqrt(a); j++)
    {
        if(a%j == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T; //testcase
    long long n;
    
    cin >> T;
    
    for(int i = 0; i < T; i++ )
    {
        cin >> n;
        if(n>=0&&n<=2)
        {
            cout << 2 << endl;
        }
        else if(n==3)
        {
            cout << 3 << endl;
        }
        else
        {
            while(!dec(n))
            {
                n++;
            }
            cout << n << endl;
        }
    }
}