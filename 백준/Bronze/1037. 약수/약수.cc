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
    
    cin >> n;
    
    int mea;
    vector<int> arr;
    
    for(int i = 0; i < n; i++)
    {
        cin >> mea;
        arr.push_back(mea);
    }
    
    sort(arr.begin(), arr.end());
    
    cout << arr[0]*arr[n-1];
    
    
    
    
}