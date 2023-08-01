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
    
    int n, k;
    queue<int> q;
    
    cin >> n >> k;
    
    for(int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    
    cout << "<";
    
    while(!q.empty())
    {
        for(int i = 0; i<k-1; i++)
        {
            q.push(q.front());
            q.pop();
        }
        
        cout << q.front();
        q.pop();
        
        if(!q.empty())
        {
            cout << ", ";
        }
    }
    cout << ">";
    
    
}
