#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, x, k;
    
    stack<int> st;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> k;
        if(k == 1)
        {
            cin >> x;
            st.push(x);
        }
        else if(k == 2)
        {
            if(!st.empty())
            {
                cout << st.top() << "\n";
                st.pop();
            }
            else
            {
                cout << -1 << "\n";
            }
            
        }
        else if(k == 3)
        {
            cout << st.size() << "\n";
        }
        else if(k == 4)
        {
            if(!st.empty())
            {
                cout << 0 << "\n";
            }
            else
            {
                cout << 1 << "\n";
            }
        }
        else
        {
            if(!st.empty())
            {
                cout << st.top() << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
        
    }
}
