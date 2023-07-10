#include <iostream>
using namespace std;

int main()
{
    int M, N;
    int sum = 0;
    cin >> M >> N;
    int arr[N-M]={0,};
    int index=0;
    int output = 0;
    
    for(int i = M; i<=N; i++)
    {
        int count = 0;
        for(int j = 1; j<=i; j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            sum += i;
            arr[index++]=i;
            output++;
        }
    }
    if(output == 0)
    {
        cout << "-1";
    }
    else
    {
        cout << sum << endl << arr[0];
    }
    
}