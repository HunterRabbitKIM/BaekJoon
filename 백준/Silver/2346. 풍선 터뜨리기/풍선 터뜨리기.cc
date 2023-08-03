#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    int num;
    vector<pair<int,int>> vec;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        cin >> num;
        vec.push_back({i, num});
    }
    
    while(!vec.empty())
    {
        cout << vec.front().first << " ";
        int nxt = vec.front().second;
        vec.erase(vec.begin());
        if(nxt > 0)
        {
            for(int i = 0; i < nxt - 1; i++)
            {
                vec.push_back(vec.front());
                vec.erase(vec.begin());
            }
        }
        else
        {
            for (int i = 0; i < (nxt * (-1)); i++) 
            {
                vec.insert(vec.begin(), vec.back());
                vec.erase(vec.end() - 1);
            }
        }
    }
}
