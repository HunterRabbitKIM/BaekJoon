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

    string str;
    stack<char> st;

    while (true)
    {
        getline(cin, str);
        if (str[0] == '.')
        {
            break;
        }
        for (int i = 0; i < str.length() - 1; i++)
        {
            if (str[i] == '(')
            {
                st.push('(');
            }
            if (str[i] == '[')
            {
                st.push('[');
            }
            if (str[i] == ']')
            {
                if (!st.empty() && st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    cout << "no" << endl;
                    int size = st.size();
                    for (int i = 0; i < size; i++)
                    {
                        st.pop();
                    }
                    break;
                }
            }
            if (str[i] == ')')
            {
                if (!st.empty() && st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    cout << "no" << endl;
                    int size = st.size();
                    for (int i = 0; i < size; i++)
                    {
                        st.pop();
                    }
                    break;
                }
            }
            if (st.empty() && i == str.length() - 2)
            {
                cout << "yes" << endl;
            }
            else if (!st.empty() && i == str.length() - 2)
            {
                cout << "no" << endl;
                int size = st.size();
                for (int i = 0; i < size; i++)
                {
                    st.pop();
                }
            }
        }
    }
}