#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    int arr[300000];
    
    while(true)
    {
        int count = 0;
        cin >> n;
        for(int i = 0; i <= 2*n; i++)
        {
            arr[i] = 0;
        }
        if(n == 0)
        {
            break;
        }
        
        for(int i = 2; i<= 2*n; i++)
        {
            if(arr[i]==0)
            {
                arr[i]=0;
            }
            for(int j = i+i; j<=2*n; j += i)
            {
                if(arr[j]!=1)
                {
                    arr[j] = 1;
                }
            }
        }
        for(int i = n + 1; i <= 2*n; i++)
        {
            if(arr[i]==0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}