#include <iostream>
using namespace std;

int main()
{
    int N;
    int x=2;
    
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        x = x + (x-1);
    }
    x *= x;
    
    cout << x << endl;
}