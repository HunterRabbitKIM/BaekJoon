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
    
    int m, n;
    cin >> m >> n;
    
    int i = m;
    
    while(i <= n)
    {
        if(i == 1)
        {
            i++;
        }
        else if(i >= 0 && i <= 2)
        {
            cout << 2 << "\n";
            i++;
        }
        else if(i==3)
        {
            cout << 3 << "\n";
            i++;
        }
        else
        {
            while(!dec(i))
            {
                i++;
                if(i > n)
                {
                    break;
                }
            }
            if(i > n)
            {
                break;
            }
            cout << i << "\n";
            i++;
        }
    }
    return 0;
}