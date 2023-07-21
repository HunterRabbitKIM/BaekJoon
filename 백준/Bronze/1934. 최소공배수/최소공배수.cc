#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    int a, b;
    int x, y;
    
    cin >> t;
    
    for(int i = 0; i < t; i++)
    {
        cin >> a >> b;
        x=a;
        y=b;
        while(true)
        {
            if(x < y)
            {
                x += a;
            }
            else if(x > y)
            {
                y += b;
            }
            else
            {
                cout << x << endl;
                break;
            }
        }
    }
}