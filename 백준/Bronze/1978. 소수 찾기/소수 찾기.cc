#include <iostream>
using namespace std;

int main()
{
    int N;
    int a;
    int output = 0;
    cin >> N;
    
    for(int i = 0; i<N; i++)
    {
        cin >> a;
        int count = 0;
        for(int j = 1; j <= a; j++)
        {
            if(a%j == 0)
            {
                count++;
            }
            
        }
        if(count == 2)
        {
            output++;
        }
    }
    
    cout << output;
    
    
}