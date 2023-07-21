#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
    if(b>a)
    {
        return gcd(b,a);
    }
    if(a%b==0)
    {
        return b;
    }
    else
    {
        return gcd(b, a%b);
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a1, a2, b1, b2;
    int n, m;
    cin >> a1 >> a2 >> b1 >> b2;
    n = b2 * a1+ b1 * a2;
    m = a2 * b2;
    
    cout << n/gcd(n,m) << " " << m/gcd(n,m);
    
}