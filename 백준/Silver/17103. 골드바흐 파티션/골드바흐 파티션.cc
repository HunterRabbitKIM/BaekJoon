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
    int n;
    
    vector<int> arr(1000000,0);
    
    cin >> t;
    
    for(int i = 2; i <= 1000000; i++)
    {
        if(arr[i]==0)
        {
            arr[i]=0;
        }
        for(int j = i+i; j<=1000000; j+=i)
        {
            if(arr[j]!=1)
            {
               arr[j]=1;
            }
        }
    }
    
    while(t--)
    {
        cin >> n;
        int count = 0;
        
        for(int i = 2; i<=n/2; i++)
        {
            if(arr[i]==0 && arr[n-i]==0)
            {
                count++;
            }
        }
        cout << count <<"\n";
        
    }
}