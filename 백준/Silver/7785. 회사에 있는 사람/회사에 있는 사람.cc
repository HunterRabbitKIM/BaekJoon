#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    string name, work;
    
    set<string> Name;
    
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> name >> work;
        if(work == "enter")
        {
            Name.insert(name);
        }
        else
        {
            Name.erase(name);
        }
    }
    
    for(auto iter = Name.rbegin(); iter != Name.rend(); iter++)
    {
        cout << *iter << "\n";
    }
}