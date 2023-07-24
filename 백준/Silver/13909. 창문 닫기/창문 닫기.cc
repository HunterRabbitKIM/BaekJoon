#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, count = 0;
    cin >> n;
    
    for(int i = 1; i*i<=n; i++)
    {
        count++;
    }
    cout << count;
}