#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}


int main()
{
    int n;
    int x;
    string y;
    cin >> n;
    vector<pair<int, string>> arr;
    
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        arr.push_back({x,y});
    }
    
    stable_sort(arr.begin(),arr.end(),compare);
    
    for(int i = 0; i < n; i++)
    {
        cout << arr[i].first << " " << arr[i].second <<  "\n";
    }
}