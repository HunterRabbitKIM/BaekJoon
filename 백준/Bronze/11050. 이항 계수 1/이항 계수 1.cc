#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int fact(int t)
{
    int number = 1;
    for(int i = 1; i <= t; i++)
    {
        number *= i;
    }
    return number;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,k;
    cin >> n >> k;
    
    int result = fact(n) / (fact(k)*fact(n-k));
    
    cout << result;
}