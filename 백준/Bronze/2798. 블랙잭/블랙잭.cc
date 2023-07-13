#include <iostream>
using namespace std;

int main()
{
    int N, M;
    int num[100]={0,};
    int sum=0;
    int max=0;
    
    cin >> N >> M;
    for(int i = 0; i < N; i++)
    {
        cin >> num[i];
    }
    
    for(int i = 0; i < N; i++)
    {
        for(int j = i+1; j < N; j++)
        {
            for(int k = j+1; k < N; k++)
            {
                sum = num[i]+num[j]+num[k];
                if(sum > max && sum <= M)
                {
                    max = sum;
                }
            }
        }
    }
    cout << max;
    
}