#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    int result = 1;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        result *= i;
    }
    
    cout << result;
    
}