#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;
int n, m;
vector<string> str;
map<string, int> mp;
string v;

bool cmp(string a, string b)
{
    if(a.size() == b.size()&&mp[a]==mp[b])
    {
        return a < b;
    }
    else if(mp[a]==mp[b])
    {
        return a.size() > b.size();
    }
    return mp[a]>mp[b];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> v;
        if(v.size() < m)
        {
            continue;
        }
        if(mp.find(v)==mp.end())
        {
            mp[v]=0;
            str.push_back(v);
        }
        mp[v]++;
    }
    sort(str.begin(), str.end(), cmp);
    
    for(int i = 0; i<str.size(); i++)
    {
        cout << str[i] << "\n";
    }
}