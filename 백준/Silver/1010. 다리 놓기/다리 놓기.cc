#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    int n, m;
    
    
    cin >> t;
    
    for(int i = 0; i < t; i++)
    {
        cin >> n >> m;
        long long int result=1;
        int r = 1;
        for(int j = m; j > m-n; j--)
        {
            result *= j;
            result /= r++;
        }
        cout << result << endl;
    }
}