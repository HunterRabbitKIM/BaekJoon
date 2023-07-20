#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,m;
    string name, problum;
    map<int, string> mapis;
    map<string, int> mapsi;
    
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++)
    {
        cin >> name;
        mapis.insert({i, name});
        mapsi.insert({name, i});
    }
    
    for(int i = 0; i< m; i++)
    {
        char problum[21];
        cin >> problum;
        if(isdigit(problum[0]))
        {
            cout << mapis.find(stoi(problum))->second << "\n";
        }
        else
        {
            cout << mapsi.find(problum)->second << "\n";
        }
    }
    
}