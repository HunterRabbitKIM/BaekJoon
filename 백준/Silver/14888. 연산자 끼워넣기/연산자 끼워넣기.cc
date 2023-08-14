#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int n; //수
int arr1[11]; //수열
int oper[4];
int mymin = 1000000001;
int mymax = -1000000001;

void qur(int value, int idx)
{
    if (idx == n)
    {
        if (value < mymin)
        {
            mymin = value;
        }
        if (value > mymax)
        {
            mymax = value;
        }
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (oper[i] > 0)
        {
            oper[i]--;
            if (i == 0)
            {
                qur(value + arr1[idx], idx + 1);
            }
            else if (i == 1)
            {
                qur(value - arr1[idx], idx + 1);
            }
            else if (i == 2)
            {
                qur(value * arr1[idx], idx + 1);
            }
            else
            {
                qur(value / arr1[idx], idx + 1);
            
            }
            oper[i]++;
        }
    }
    return;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cin >> oper[i];
    }
    qur(arr1[0], 1);

    cout << mymax << "\n";
    cout << mymin;
}
