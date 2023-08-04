#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    deque<int> dq;
    int n, m;
    int a, b;
    bool arr[100001];
    
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(arr[i]==0)
        {
            dq.push_back(a);
        }
    }
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> b;
        dq.push_front(b);
        cout << dq.back() << " ";
        dq.pop_back();
    }
}
