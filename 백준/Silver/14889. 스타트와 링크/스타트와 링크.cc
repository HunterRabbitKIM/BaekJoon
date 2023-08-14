#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
#include <cmath>
using namespace std;

int n;
int stats[21][21];
bool check[21];
int mini = 1000000000;

void team(int x, int p)
{
    if (x == n / 2)
    {
        int start = 0, link = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (check[i] == true && check[j] == true)
                {
                    start += stats[i][j];
                }
                if (check[i] == false && check[j] == false)
                {
                    link += stats[i][j];
                }
            }
            
        }
        int temp = abs(start - link);
        if (mini > temp)
        {
            mini = temp;
        }
        return;
    }
    for (int i = p; i < n; i++)
    {
        check[i] = true;
        team(x + 1, i + 1);
        check[i] = false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> stats[i][j];
        }
    }

    team(0, 1);

    cout << mini;
    
}
