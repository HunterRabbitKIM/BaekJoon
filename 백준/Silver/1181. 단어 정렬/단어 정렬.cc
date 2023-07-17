#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(string a, string b)
{
    if(a.length()==b.length())
    {
        return a < b;
    }
    else
    {
        return a.length()< b.length();
    }
}

int main()
{
    int n;
    string str;
    cin >> n;
    
    vector<string> arr;
    
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        if(find(arr.begin(), arr.end(), str) == arr.end())
        {
            arr.push_back(str);
        }
    }
    sort(arr.begin(), arr.end(), compare);
    
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "\n";
    }
    
    
}