#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    int count = 0;
    
    string name;
    set<string> arr;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> name;
        if(name == "ENTER")
        {
            count += arr.size();
            arr.clear();
        }
        else
        {
            arr.insert(name);
        }
    }
    count += arr.size();
    cout << count;
}