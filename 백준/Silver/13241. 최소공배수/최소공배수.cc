#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int gcd(long long int a, long long int b)
{
    if(b==0)
    {
        return a;
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
    
    long long int a, b;
    
    cin >> a >> b;
    
    cout << a*b/gcd(a,b);
    
}