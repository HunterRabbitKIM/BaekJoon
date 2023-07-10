#include <iostream>
#include <array>
using namespace std;

int main()
{
    int N, K;
    int div = 0;
    int index = 0;
    int count = 0;
    
    cin >> N >> K;
    
    int arr[N]={0,};
    
    for(int i = 1; i <= N; i++)
    {
        div = N%i;
        if(div == 0)
        {
            arr[index] = i;
            index++;
            count++;
        }
        
    }
    
    if(count < K)
    {
        cout << "0";
    }
    else
    {
        cout << arr[K-1];
    }
   
}