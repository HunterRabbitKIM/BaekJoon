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

    int n, m;
    int count = 0;
    cin >> n >> m;

    deque<int> dq;

    for (int i = 1; i <= n; i++)
    {
        dq.push_back(i);
    }

    while (m--)
    {
        int num;
        cin >> num;

        int idx = 0;
        for (int i = 0; i < dq.size(); i++)
        {
            if (dq[i] == num)
            {
                idx = i;
                break;
            }
        }

        if (idx <= dq.size() / 2)
        {
            for (int i = 0; i < idx; i++)
            {
                dq.push_back(dq.front());
                dq.pop_front();
                count++;
            }
            dq.pop_front();
        }
        else
        {
            for (int i = 0; i < dq.size() - idx; i++)
            {
                dq.push_front(dq.back());
                dq.pop_back();
                count++;
            }
            dq.pop_front();
        }
    }
    cout << count;
}