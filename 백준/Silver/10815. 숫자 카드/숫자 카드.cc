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
    vector<int> arr1;
    int number1;
    int m;
    int number2;
    
    cin >> n;
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
        if(binary_search(arr1.begin(), arr1.end(), number2))
        {
            cout << "1" << " ";
        }
        else
        {
            cout << "0" << " ";
        }
    }
    

    
    
    
}