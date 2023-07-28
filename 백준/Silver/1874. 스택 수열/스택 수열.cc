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
    
    int n,m;
    int count=1;
    stack<int> st;
    vector<char> arr;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> m;
        while(count <= m)
        {
            arr.push_back('+');
            st.push(count);
            count++;
        }
        
        if(m==st.top())
        {
            st.pop();
            arr.push_back('-');
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "\n";
    }
}