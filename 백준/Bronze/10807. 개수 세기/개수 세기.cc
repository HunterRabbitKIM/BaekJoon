#include <iostream>
using namespace std;

int main()
{
    int N;
    int V;
    int S=0;
    
    cin >> N;
    
    int array[N];
    
    for(int i = 0; i < N; i++)
    {
        cin >> array[i];
    }
    
    cin >> V;
    for(int i = 0; i < N; i++)
    {
        if(array[i]==V)
          S++;  
    }
    cout << S;
}