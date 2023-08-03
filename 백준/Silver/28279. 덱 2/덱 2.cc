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
    
    int n, k, x;
    deque<int> dq;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> k;
        if(k == 1)
        {
            cin >> x;
            dq.push_front(x);
        }
        else if(k == 2)
        {
            cin >> x;
            dq.push_back(x);
        }
        else if(k == 3)
        {
            if(!dq.empty())
            {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
            else
            {
                cout << -1 << "\n";
            }
        }
        else if(k == 4)
        {
            if(!dq.empty())
            {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
            else
            {
                cout << -1 << "\n";
            }
        }
        else if(k==5)
        {
            cout << dq.size() << "\n";
        }
        else if(k==6)
        {
            if(!dq.empty())
            {
                cout << 0 << "\n";
            }
            else
            {
                cout << 1 << "\n";
            }
        }
        else if(k==7)
        {
            if(!dq.empty())
            {
                cout << dq.front() << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
        else if(k==8)
        {
            if(!dq.empty())
            {
                cout << dq.back() << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
    }
}
