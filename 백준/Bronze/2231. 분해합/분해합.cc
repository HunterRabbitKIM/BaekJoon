#include <iostream>
using namespace std;

int main()
{
    int N;
    int sum = 0;
    int M = 0;
    
    cin >> N;
    
    for(int i = 1; i < N; i++)
    {
        sum = i;
        int n = i;
        while(n > 0)
        {
            sum += (n%10);
            n /= 10;
        }
        
        if(sum == N)
        {
            M = i;
            break;
        }
    }
    cout << M;
}