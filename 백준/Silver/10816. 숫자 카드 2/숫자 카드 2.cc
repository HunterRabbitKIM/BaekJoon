#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,m;
    int number1, number2;
    cin >> n;
    int count[n] = {0,};
    vector<int> arr1;
    vector<int> arr2;
    
    
    for(int i = 0; i < n; i++)
    {
        cin >> number1;
        arr1.push_back(number1);
    }
    
    sort(arr1.begin(), arr1.end());
    
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> number2;
        arr2.push_back(number2);
    }
    for(int i = 0; i < m; i++)
    {
        cout << (upper_bound(arr1.begin(), arr1.end(), arr2[i])-arr1.begin()) - (lower_bound(arr1.begin(), arr1.end(), arr2[i])-arr1.begin()) << " ";
    }
    
}