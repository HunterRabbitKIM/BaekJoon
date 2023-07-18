#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    vector<string> str1;
    
    string string1;
    string string2;
    
    int sum=0;
    
    for(int i = 0; i < n; i++)
    {
        cin >> string1;
        str1.push_back(string1);
    }
    
    sort(str1.begin(), str1.end());
    
    for(int i = 0; i < m; i++)
    {
        cin >> string2;
        if(binary_search(str1.begin(), str1.end(), string2))
        {
            sum++;
        }
    }
    
    cout << sum;
}