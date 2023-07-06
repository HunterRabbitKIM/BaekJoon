#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int i = 0;
    
    for(i = 1; i < N; i++)
    {
        N -= i;
    }
    
    if(i%2==1)
    {
        cout << i+1-N << "/" << N << endl;
    }
    else
    {
        cout << N << "/" << i+1-N << endl;
    }
}