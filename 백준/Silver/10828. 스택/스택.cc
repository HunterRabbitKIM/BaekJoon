#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    stack<int> st;
    string str;
    
    int num;
    
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        
        if(str == "push")
        {
            cin >> num;
            st.push(num);
        }
        else if(str == "pop")
        {
            if(!st.empty())
            {
                cout << st.top() << "\n";
                st.pop();
            }
            else
            {
                cout << "-1" << "\n";
            }
        }
        else if(str == "size")
        {
            cout << st.size() << "\n";
        }
        else if(str == "empty")
        {
            if(st.empty())
            {
                cout << "1" << "\n";
            }
            else
            {
                cout << "0" << "\n";
            }
        }
        else if(str == "top")
        {
            if(!st.empty())
            {
                cout << st.top() << "\n";
            }
            else
            {
                cout << "-1" << "\n";
            }
        }
    }
}