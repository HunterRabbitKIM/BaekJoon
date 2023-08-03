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

    int n, input, out = 1, x = 0;
    stack<int> st;
    vector<int> vec;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        vec.push_back(input);
    }
    while (true)
    {
        if (x < n && vec[x] == out)
        {
            x++;
            out++;
        }
        else if (!st.empty() && st.top() == out)
        {
            out++;
            st.pop();
        }
        else if (x < n)
        {
            st.push(vec[x]);
            x++;
        }
        else if (out > n)
        {
            cout << "Nice";
            return 0;
        }
        else
        {
            cout << "Sad";
            return 0;
        }
    }
}
