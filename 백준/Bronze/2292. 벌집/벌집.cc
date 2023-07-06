#include <iostream>
using namespace std;

int main()
{
    int N;
    int count = 2;
    int i = 1;
    
    cin >> N;
    
    if(N == 1)
    {
        cout << 1;
    }
    else
    {
        while(N>=count)
        {
            count += i*6;
            i++;
        }
        cout << i;
    }
}