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
    
    int t,n,sub,num;
    vector<long int> a;
    vector<long int> b;
    
    cin >> t;
    
    for(int i = 0; i < t; i++)
    {
        cin >> n;
        a.push_back(n);
    }
    
    sort(a.begin(), a.end());
    
    for(int i = 0; i < t-1; i++)
    {
        sub = a[i+1]-a[i];
        b.push_back(sub);
    }
    
    num = b[0];
    for(int i = 1; i < t-1; i++)
    {
        num = gcd(num, b[i]);
    }
    
    cout << (a[t-1]-a[0])/num-t+1;
}