#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N[5]={0,};
    int sum = 0;
    int average = 0;
    
    for(int i = 0; i < 5; i++)
    {
        cin >> N[i];
    }
    
    sort(N, N+5);
    
    for(int i = 0; i<5; i++)
    {
        sum += N[i];
    }
    
    average = sum/5;
    
    cout << average << endl << N[2];
}