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

    int t;
    string str;
    stack<char> st;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> str;
        for (int j = 0; j < str.length(); j++)
        {
            if (st.empty() || str[j] == '(')
            {
                st.push(str[j]);
            }
            else if (st.top() == '(')
            {
                st.pop();
            }
        }
        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            int size = st.size();
            for (int i = 0; i < size; i++)
            {
                st.pop();
            }
        }
    }
}