#include <iostream>
using namespace std;

int main()
{
    int X, N;
    int a, b;
    int S=0;
    
    cin >> X;
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        cin >> a >> b;
        S += a*b;
    }
    if(X == S)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}