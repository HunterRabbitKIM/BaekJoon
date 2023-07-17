#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num;
    
    vector<int> arr1, arr2;
    
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        arr1.push_back(num);
        arr2.push_back(num);
    }
    
    sort(arr1.begin(), arr1.end());
    arr1.erase(unique(arr1.begin(), arr1.end()), arr1.end());
    
    for(int i = 0; i < n; i++)
    {
        cout << lower_bound(arr1.begin(),arr1.end(), arr2[i])-arr1.begin() << " ";
    }
    
}