#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x,y;
    vector<pair<int, int>> arr;
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        arr.push_back({x,y});
    }
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i< n; i++)
    {
        cout << arr[i].first << " " << arr[i].second << "\n";
    }
    
}