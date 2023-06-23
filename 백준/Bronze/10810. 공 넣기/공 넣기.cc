#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[101]={0,};
    int a,b,c;
    
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;
        for(int j = a; j<=b; j++)
        {
            arr[j] = c;
        }
    }
    
    for(int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}