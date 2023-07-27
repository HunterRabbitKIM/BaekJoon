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
    string name1, name2;
    set<string> arr{"ChongChong"};
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> name1 >> name2;
        if(arr.find(name1) != arr.end() || arr.find(name2) != arr.end())
        {
            arr.insert(name1);
            arr.insert(name2);
        }
    }
    cout << arr.size();
}