#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    
    cin >> T;
    int N[T]={0,};
    
    for(int i = 0; i < T; i++)
    {
        cin >> N[i];
    }
    sort(N,N+T);
    
    for(int i = 0; i < T; i++)
    {
        cout << N[i] << endl;
    }
}