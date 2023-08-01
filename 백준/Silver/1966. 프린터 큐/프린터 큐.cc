#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int m, k;
    int x;
 

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m >> k;

        queue<pair<int, int>> q;
        priority_queue<int> pq;

        int count = 0;
        
        for (int j = 0; j < m; j++)
        {
            cin >> x;

            q.push({ j,x });
            pq.push(x);
        }

        while (!q.empty())
        {
            int idx = q.front().first;
            int priority = q.front().second;
            q.pop();

            if (pq.top() == priority)
            {
                pq.pop();
                count++;

                if (idx == k)
                {
                    cout << count << endl;
                    break;
                }
            }
            else
            {
                q.push({ idx, priority });
            }
        }
    }
}

