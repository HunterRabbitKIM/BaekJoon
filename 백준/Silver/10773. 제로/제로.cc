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
    
    int k, num;
    int size;
    int sum=0;
    stack<int> st;
    
    cin >> k;
    
    for(int i = 0; i < k; i++)
    {
        cin >> num;
        if(num == 0)
        {
            st.pop();
        }
        else
        {
            st.push(num);
        }
    }
    size = st.size();
    for(int i = 0; i<size; i++)
    {
        sum += st.top();
        st.pop();
    }
    cout << sum;
}