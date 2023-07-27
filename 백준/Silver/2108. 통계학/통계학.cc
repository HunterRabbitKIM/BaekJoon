#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    int num;
    double sum = 0;
    int count[8001] = { 0, };
    int avg = 0;
    int max = -4001;
    int a;

    vector<int> arr;
    vector<int> arr2;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        count[num+4000]++;
        sum += num;
        arr.push_back(num);
        
    }

    avg = round(sum / n);
    cout << avg << "\n";

    sort(arr.begin(), arr.end());
    cout << arr[arr.size() / 2] << "\n";

    for (int i = 0; i < 8001; i++)
    {
        if (max < count[i])
        {
            max = count[i];
            a = i;
        }
    }

    for (int i = a+1; i < 8001; i++)
    {
        if (max == count[i])
        {
            a = i;
            break;
        }
    }

    cout << a - 4000 << "\n";


    cout << arr[arr.size() - 1] - arr[0];
}