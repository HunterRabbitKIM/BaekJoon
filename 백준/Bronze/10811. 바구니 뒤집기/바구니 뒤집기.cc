#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;
    int a,b;
    int arr[101] = {0,};
    
    for(int i = 1; i <= N; i++)
    {
        arr[i] = i;
    }
    
    for(int i = 0; i<M; i++)
    {
        cin >> a >> b;
        for(int i = 0; i<=(b-a)/2; i++)
        {
            int temp = arr[a+i];
            arr[a+i] = arr[b-i];
            arr[b-i] = temp;
        }
        
    }
    
    for(int i = 1; i<=N; i++)
    {
        cout << arr[i] << " ";
    }
}